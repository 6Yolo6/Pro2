#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <memory.h>
#include <iostream>

using namespace std;

struct BTreeNode {
    int value{ 0 };
    int height{ 0 };
    BTreeNode* parent{ nullptr };
    BTreeNode* left_child{ nullptr };
    BTreeNode* right_child{ nullptr };
    BTreeNode* prev{ nullptr };
    BTreeNode* next{ nullptr };
    BTreeNode(int value) {
        this->value = value;
    }
    BTreeNode() {
        this->value = 0;
    }
};

// 计算树的深度
int tree_depth(BTreeNode* root) {
    if (!root)
        return 0;
    else {
        return max(tree_depth(root->left_child), tree_depth(root->right_child)) + 1;
    }
}

//从小到大排序
bool greater_bt_sort(BTreeNode* b1, BTreeNode* b2) {
    return b1->value < b2->value;
}

//Huffman树的构建
BTreeNode* create_huffman_tree(const vector<int>& values) {
    vector<BTreeNode*> q;
    for (int i = 0; i < values.size(); i++)
        q.push_back(new BTreeNode(values[i]));
    for (int i = 1; i < values.size(); i++) {
        sort(q.begin(), q.end(), greater_bt_sort);
        BTreeNode* node = new BTreeNode;
        int min1 = q.front()->value;
        node->left_child = q.front();
        q.erase(q.begin());
        int min2 = q.front()->value;
        node->right_child = q.front();
        q.erase(q.begin());
        node->value = min1 + min2;
        q.push_back(node);
    }
    return q.front();
}

//哈夫曼编码
void huffman_encode(BTreeNode* root, int length, int** m, map<char, int>& cnt) {
    static int num[1005];
    if (root != nullptr) {
        if (root->left_child == nullptr && root->right_child == nullptr) {
            map<char, int>::iterator it = cnt.begin();
            for (; it != cnt.end(); it++) {
                if (it->second == root->value) {
                    cout <</* root->value << " " << it->first << */(int)it->first << " ";
                    for (int i = 0; i < length; i++)
                        m[(int)it->first][i] = num[i];
                    cnt.erase(it++);
                    break;
                }
            }
            for (int i = 0; i < length; i++)
                cout << num[i];
            cout << endl;
        }
        else {
            num[length] = 0;
            huffman_encode(root->left_child, length + 1, m, cnt);
            num[length] = 1;
            huffman_encode(root->right_child, length + 1, m, cnt);
        }
    }
}

//哈夫曼解码
void huffman_decode(int** m, string& str, string& s) {
    int j, k = 0;
    for (int p = 0; p < str.size(); p++) {
        for (int i = 0; i < 256; i++) {
            if (i < str[p])
                i = str[p] - i;
            j = 0;
            if (m[i][0] != 0 && m[i][0] != 1)
                continue;
            else if (str[p] == i) {
                while (m[i][j] == 0 || m[i][j] == 1) {
                    for (; k < s.size(); k++) {
                        if (s[k] - '0' == m[i][j])
                            j++;
                        else if (m[i][j] == -1)
                            break;
                    }
                }
                cout << (char)i;
                break;
            }
        }
    }
}

int main23143332() {
    BTreeNode* root = nullptr;
    string str;
    char ch;
    map<char, int> cnt;
    string::iterator i;
    map<char, int>::iterator it;
    while ((ch = getchar()) != EOF)
        str += ch;
    for (i = str.begin(); i != str.end(); i++)
        cnt[*i]++;
    vector<int> huffman;
    for (it = cnt.begin(); it != cnt.end(); it++)
        huffman.push_back(it->second);
    root = create_huffman_tree(huffman);
    int k = tree_depth(root);
    cout << cnt.size() << endl;
    map<char, int> cnt1 = cnt;
    string s;
    int** m = new int* [256];
    for (int i = 0; i < 256; i++) {
        m[i] = new int[k + 1];
        memset(m[i], -1, sizeof(int) * k);
    }
    huffman_encode(root, 0, m, cnt1);
    int p = 0;
    for (i = str.begin(); i != str.end();) {
        it = cnt.find(*i);
        for (int k = 0; k < it->second; k++) {
            if (i == str.end())
                break;
            while (m[(int)*i][p] == 0 || m[(int)*i][p] == 1) {
                cout << m[(int)*i][p];
                s += m[(int)*i][p++] + '0';
            }
            p = 0;
            if (i != str.end())
                i++;
        }
    }
    cout << endl;
    huffman_decode(m, str, s);
    return 0;
}