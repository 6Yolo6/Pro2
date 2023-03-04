//#include <iostream>
//#include "btree.h"
//
//using namespace std;
//
//static int __tree_depth(BTreeNode* root, int level) {
//    int ret = level;
//    root->height = level;
//    if (root->left_child) {
//        ret = __tree_depth(root->left_child, level + 1);
//    }
//    if (root->right_child) {
//        ret = max(__tree_depth(root->right_child, level + 1), ret);
//    }
//    return ret;
//}
//
//
//static void __fill_map(vector<BTreeNode*>& m, BTreeNode* n, int index) {
//    m[index] = n;
//    if (n->left_child) {
//        __fill_map(m, n->left_child, index * 2 + 1);
//    }
//    if (n->right_child) {
//        __fill_map(m, n->right_child, index * 2 + 1 + 1);
//    }
//}
//
//static void __putchars(char c, int n) {
//    while (n--)
//        cout << c;
//}
//
//static void __print_left_top(int w) {
//    printf("%*c", w - 1, ' ');
//    printf("+");
//    __putchars('-', w - 2);
//    printf("-");
//}
//
//static void __print_right_top(int w) {
//    __putchars('-', w - 1);
//    printf("+");
//    printf("%*c", w, ' ');
//}
//
//static void __print_left_bottom(int w) {
//    printf("%*c%*c", w, '|', w, ' ');
//}
//
//static void __print_right_bottom(int w) {
//    printf("%*c%*c", w, '|', w, ' ');
//}
//
//typedef int (*fetch_tn_value)(BTreeNode*);
//static int __print_node(BTreeNode* n, int w, fetch_tn_value getvalue) {
//    return printf("%*d", w, getvalue(n));
//}
//
//void __print_btree_imp(BTreeNode* n, fetch_tn_value getvalue) {
//    if (n == nullptr) {
//        return;
//    }
//    int depth = __tree_depth(n, 1), i, j, index;
//    vector<BTreeNode*> m((1 << depth) - 1);
//    __fill_map(m, n, 0);
//    for (j = 0, index = 0; j < depth; j++) {
//        int w = 1 << (depth - j);
//        if (j > 0) {
//            // Top part of node to parent branch
//            for (i = 0; i < 1 << (j - 1); i++) {
//                if (m[index + i * 2]) {
//                    __print_left_top(w);
//                }
//                else {
//                    __putchars(' ', w * 2 - 1);
//                }
//                // 只要有一个节点存在，就必须输出中间的+
//                if (m[index + i * 2] || m[index + i * 2 + 1]) {
//                    printf("+");
//                }
//                else {
//                    printf(" ");
//                }
//                if (m[index + i * 2 + 1]) {
//                    __print_right_top(w);
//                }
//                else {
//                    __putchars(' ', w * 2);
//                }
//            }
//            putchar('\n');
//            // Bottom part of node to parent branch
//            for (i = 0; i < 1 << j; i++)
//                if (m[index + i])
//                    if (i % 2 == 0)
//                        __print_left_bottom(w);
//                    else
//                        __print_right_bottom(w);
//                else
//                    __putchars(' ', w * 2);
//            putchar('\n');
//        }
//        // Node content
//        for (i = 0; i < 1 << j; i++, index++)
//            if (m[index])
//                __putchars(' ', w * 2 - __print_node(m[index], w, getvalue));
//            else
//                __putchars(' ', w * 2);
//        putchar('\n');
//    }
//}
//
//int get_btree_value(BTreeNode* n) {
//    return n->value;
//}
//
//int get_btree_height(BTreeNode* n) {
//    return n->height;
//}
//
//int get_btree_parent(BTreeNode* n) {
//    if (n->parent)
//        return n->parent->value;
//    return 0;
//}
//
//int get_btree_balance(BTreeNode* n) {
//    int left = 0, right = 0;
//    if (n->left_child)
//        left = n->left_child->height;
//    if (n->right_child)
//        right = n->right_child->height;
//    return left - right;
//}
//
//void print_btree_value(BTreeNode* n) {
//    __print_btree_imp(n, get_btree_value);
//}
//
//void print_btree_height(BTreeNode* n) {
//    __print_btree_imp(n, get_btree_height);
//}
//
//void print_btree_parent(BTreeNode* n) {
//    __print_btree_imp(n, get_btree_parent);
//}
//
//void print_btree_balance(BTreeNode* n) {
//    __print_btree_imp(n, get_btree_balance);
//}
//
////插入左节点
//BTreeNode* insert_lchild(BTreeNode* node, int value) {
//    node->left_child = new BTreeNode(value);
//    return node->left_child;
//}
//
////插入右节点
//BTreeNode* insert_rchild(BTreeNode* node, int value) {
//    node->right_child = new BTreeNode(value);
//    return node->right_child;
//}
//
////计算树的节点数目
//int count_tree(BTreeNode* root) {
//    if (!root)
//        return 0;
//    else
//        return count_tree(root->left_child) + count_tree(root->right_child) + 1;
//}
//
//// 计算树的深度
//int tree_depth(BTreeNode* root) {
//    if (!root)
//        return 0;
//    else {
//        return max(tree_depth(root->left_child), tree_depth(root->right_child)) + 1;
//    }
//}
//
//// 判断树是否是满二叉树
//bool is_full_binary_tree(BTreeNode* root) {
//    int cnt = tree_depth(root), re = 1;
//    while (cnt--) {
//        re *= 2;
//    }
//    if (re - 1 == count_tree(root))
//        return true;
//    else
//        return false;
//}
//
//// 判断树是否是完全二叉树
//bool is_complete_binary_tree(BTreeNode* root) {
//    queue <BTreeNode*> q;
//    q.push(root);
//    while (q.front()) {
//        q.push(q.front()->left_child);
//        q.push(q.front()->right_child);
//        q.pop();
//    }
//    while (!q.empty()) {
//        if (q.front() != nullptr) {
//            return false;
//        }
//        q.pop();
//    }
//    return true;
//}
//
//// 树的镜像翻转
//void reverse_tree(BTreeNode* root) {
//    if (!root)
//        return;
//    else {
//        BTreeNode* temp;
//        temp = root->left_child;
//        root->left_child = root->right_child;
//        root->right_child = temp;
//        reverse_tree(root->left_child);
//        reverse_tree(root->right_child);
//    }
//}
//
////二叉搜索树非递归插入
//void BST_insert_no_recur(BTreeNode* root, int value) {
//    BTreeNode* cur = root;
//    BTreeNode* par = nullptr;
//    while (cur != nullptr) {
//        if (cur->value == value)
//            return;
//        else if (cur->value < value) {
//            par = cur;
//            cur = cur->right_child;
//        }
//        else if (cur->value > value) {
//            par = cur;
//            cur = cur->left_child;
//        }
//    }
//    if (par->value < value)
//        par->right_child = new BTreeNode(value);
//    else
//        par->left_child = new BTreeNode(value);
//}
//
////二叉搜索树递归插入
//BTreeNode* walk_BST_insert(BTreeNode* root, int value) {
//    if (root == nullptr)
//        return new BTreeNode(value);
//	if (root->value == value)
//		return root;
//    if (root->value < value) {
//        if (!root->right_child)
//            root->right_child = walk_BST_insert(root->right_child, value);
//        else
//            walk_BST_insert(root->right_child, value);
//    }
//    else {
//        if (!root->left_child)
//            root->left_child = walk_BST_insert(root->left_child, value);
//        else
//            walk_BST_insert(root->left_child, value);
//    }
//}
//
////二叉搜索树非递归删除
//void BST_delete_no_recur(BTreeNode* root, int value) {
//    if (root == nullptr) {
//        return;
//    }
//    BTreeNode* cur = root;
//    BTreeNode* par = nullptr;
//    while (cur != nullptr) {
//        if (cur->value == value)
//            break;
//        else if (cur->value < value) {
//            par = cur;
//            cur = cur->right_child;
//        }
//        else if (cur->value > value) {
//            par = cur;
//            cur = cur->left_child;
//        }
//    }
//    if (cur->left_child == nullptr && cur->right_child == nullptr) { //叶子结点
//        if (cur == par->left_child)
//            par->left_child = nullptr;
//        else if (cur == par->right_child)
//            par->right_child = nullptr;
//    }
//    else if (cur->right_child == nullptr) { //只有左节点
//        if (cur == par->left_child)
//            par->left_child = cur->left_child;
//        else if (cur == par->right_child)
//            par->right_child = cur->left_child;
//    }
//    else if (cur->left_child == nullptr) { //只有右节点
//        if (cur == par->left_child)
//            par->left_child = cur->right_child;
//        else if (cur == par->right_child)
//            par->right_child = cur->right_child;
//    }
//    else if (cur->left_child != nullptr && cur->right_child != nullptr) { //左右节点都有
//        BTreeNode* last_par = nullptr;
//        BTreeNode* node = cur->right_child; 
//        BTreeNode* last = node;
//        while (node) {
//            last_par = last;
//            last = node;
//            node = node->left_child;
//        }
//        if (last != cur->right_child) {
//            last_par->left_child = last->right_child;
//            last->right_child = cur->right_child;
//        }
//        if (cur == root->right_child) // 根节点
//            root->right_child = last;
//        else if (cur == par->left_child)
//            par->left_child = last;
//        else if (cur == par->right_child)
//            par->right_child = last;
//        last->left_child = cur->left_child;
//    }
//}
//
////从小到大排序
//bool greater_bt_sort (BTreeNode* b1, BTreeNode* b2) {
//    return b1->value < b2->value;
//}
//
////Huffman树的构建
//BTreeNode* create_huffman_tree(const vector<int>& values) {
//    vector<BTreeNode*> q;
//    for (int i = 0; i < values.size(); i++)
//        q.push_back(new BTreeNode(values[i]));
//    for (int i = 1; i < values.size(); i++) {
//        sort(q.begin(), q.end(), greater_bt_sort);
//        BTreeNode* node = new BTreeNode;
//        int min1 = q.front()->value;
//        node->left_child = q.front();
//        q.erase(q.begin());
//        int min2 = q.front()->value;
//        node->right_child = q.front();
//        q.erase(q.begin());
//        node->value = min1 + min2;
//        q.push_back(node);
//    }
//    return q.front();
//}
//
////计算哈夫曼树的带权路径长度
//int huffman_value_length(BTreeNode* root, int length) {
//    if (root == nullptr)
//        return 0;
//    else {
//        if (root->left_child == nullptr && root->right_child == nullptr)
//            return root->value * length;
//        else
//            return huffman_value_length(root->left_child, length + 1) + huffman_value_length(root->right_child, length + 1);
//    }
//}
//
////哈夫曼编码
//void huffman_encode(BTreeNode* root, int length, int **m, map<char, int> &cnt) {
//    static int num[1005];
//    if (root != nullptr) {
//        if (root->left_child == nullptr && root->right_child == nullptr) {
//            map<char, int>::iterator it = cnt.begin();
//            for (; it != cnt.end(); it++) {
//                if (it->second == root->value) {
//                    cout << root->value << " " << it->first <<(int)it->first << " ";
//                    for (int i = 0; i < length; i++)
//                        m[(int)it->first][i] = num[i];
//                    cnt.erase(it++);
//                    break;
//                }
//            }
//            for (int i = 0; i < length; i++) 
//                cout << num[i];
//            cout << endl;
//        }
//        else {
//            num[length] = 0;
//            huffman_encode(root->left_child, length + 1, m, cnt);
//            num[length] = 1;
//            huffman_encode(root->right_child, length + 1, m, cnt);
//        }
//    }
//}
//
////哈夫曼解码
//void huffman_decode(int**m, string &str, string &s) {
//    int j, k = 0;
//    for (int p = 0; p < str.size(); p++) {
//        for (int i = 0; i < 256; i++) {
//            if (i < str[p])
//                i = str[p] - i;
//            j = 0;
//            if (m[i][0] != 0 && m[i][0] != 1)
//                continue;
//            else if (str[p] == i) {
//                while (m[i][j] == 0 || m[i][j] == 1) {
//                    for (; k < s.size(); k++) {
//                        if (s[k] - '0' == m[i][j])
//                            j++;
//                        else if (m[i][j] == -1)
//                            break;
//                    }
//                }
//                cout << (char)i;
//                break;
//            }
//        }
//    }
//}
//
//// 递归先序遍历
//void walk_tree_vlr(BTreeNode* root) {
//    if (!root)
//        return;
//    else {
//        cout << root->value << " ";
//        walk_tree_vlr(root->left_child);
//        walk_tree_vlr(root->right_child);
//    }
//}
//
//// 递归中序遍历
//void walk_tree_lvr(BTreeNode* root) {
//    if (!root)
//        return;
//    else {
//        walk_tree_lvr(root->left_child);
//        cout << root->value << " ";
//        walk_tree_lvr(root->right_child);
//    }
//}
//
//// 递归后序遍历
//void walk_tree_lrv(BTreeNode* root) {
//    if (!root)
//        return;
//    else {
//        walk_tree_lrv(root->left_child);
//        walk_tree_lrv(root->right_child);
//        cout << root->value << " ";
//    }
//}
//
//// 层序遍历
//void walk_tree_bfs(BTreeNode* root) {
//    queue<BTreeNode*> q;
//    if (root)
//        q.push(root);
//    while (!q.empty()) {
//        cout << q.front()->value << " ";
//        if (q.front()->left_child)
//            q.push(q.front()->left_child);
//        if (q.front()->right_child)
//            q.push(q.front()->right_child);
//        q.pop();
//    }
//}
//
//// 非递归先序遍历
//void walk_tree_vlr_no_recur(BTreeNode* root) {
//    stack<BTreeNode*> s;
//    BTreeNode* p = root;
//    s.push(root);
//    while (!s.empty()) {
//        cout << p->value << " ";
//        if (p->right_child)
//            s.push(p->right_child);
//        if (p->left_child)
//            p = p->left_child;
//        else {
//            p = s.top();
//            s.pop();
//        }
//    }
//}
//
//// 非递归中序遍历 
//void walk_tree_lvr_no_recur(BTreeNode* root) {
//    BTreeNode* p = root;
//    stack<BTreeNode*> s;
//    while (!s.empty() || p) {
//        if (p) {
//            s.push(p);
//            p = p->left_child;
//        }
//        else {
//            p = s.top();
//            s.pop();
//            cout << p->value << " ";
//            p = p->right_child;
//        }
//    }
//}
//
////struct FlagNode {
////    BTreeNode* node;
////    TNode Tnode;
////};
//
////非递归后序遍历
//void walk_tree_lrv_no_recur(BTreeNode* root) {
//	stack<BTreeNode*> s;
//	BTreeNode* cur, * last;
//	cur = root;
//	last = nullptr;
//	while (!s.empty() || cur) {
//        //当前节点移到左下角
//        while (cur) {
//            s.push(cur);
//            cur = cur->left_child;
//        }
//		cur = s.top();
//		if (cur->right_child == nullptr || cur->right_child == last) {
//			cout << cur->value << " ";
//            s.pop();
//			last = cur;
//            cur = nullptr;
//		}
//		else 
//			cur = cur->right_child;
//	}
//
//    /*stack<FlagNode> s;
//    FlagNode flag_node;
//    BTreeNode* p = root;
//    while (!s.empty() || p) {
//        while (p) {
//            flag_node.node = p;
//            flag_node.Tnode = TNode::left;
//            s.push(flag_node);
//            p = p->left_child;
//        }
//        flag_node = s.top();
//        s.pop();
//        if (flag_node.Tnode == TNode::left) {
//            flag_node.Tnode = TNode::right;
//            s.push(flag_node);
//            p = flag_node.node;
//            p = p->right_child;
//        }
//        else {
//            cout << flag_node.node->value << " ";
//            p = nullptr;
//        }
//    }*/
//}
//
////构造先序线索
//void build_threads_vlr(BTreeNode* root) {
//    root->prev = nullptr;
//    stack<BTreeNode*> s;
//    BTreeNode* p = root;
//    BTreeNode* prev = nullptr;
//    s.push(root);
//    while (!s.empty()) {
//        cout << p->value << " ";
//        if (prev) {
//            prev->next = p;
//            p->prev = prev;
//        }
//        if (p->right_child)
//            s.push(p->right_child);
//        prev = p;
//        if (p->left_child) {
//            p = p->left_child;
//        }
//        else {
//            p = s.top();
//            s.pop();
//        }
//    }
//    prev->next = nullptr;
//    cout << endl;
//    while (root) {
//        cout << root->value << " ";
//        root = root->next;
//    }
//}
//
////构造中序线索
//void build_threads_lvr(BTreeNode* root) {
//    BTreeNode* p = root;
//    BTreeNode* prev = nullptr;
//    stack<BTreeNode*> s;
//    while (!s.empty() || p) {
//        if (p) {
//            s.push(p);
//            p = p->left_child;
//        }
//        else {
//            p = s.top();
//            s.pop();
//            cout << p->value << " ";
//            if (prev) {
//                prev->next = p;
//                p->prev = prev;
//            }
//            prev = p;
//            p = p->right_child;
//        }
//    }
//    prev->next = nullptr;
//    cout << endl;
//    while (root->left_child) {
//        root = root->left_child;
//    }
//    root->prev = nullptr;
//    while (root) { 
//        cout << root->value << " ";
//        root = root->next;
//    }
//}
//
////构造后序线索
//void build_threads_lrv(BTreeNode* root) {
//    stack<BTreeNode*> s;
//    BTreeNode* cur, * last;
//    cur = root;
//    last = nullptr;
//    while (!s.empty() || cur) {
//        while (cur) {
//            s.push(cur);
//            cur = cur->left_child;
//        }
//        cur = s.top();
//        if (cur->right_child == nullptr || cur->right_child == last) {
//            cout << cur->value << " ";
//            if (last) {
//                last->next = cur;
//                cur->prev = last;
//            }
//            s.pop();
//            last = cur;
//            cur = nullptr;
//        }
//        else {
//            cur = cur->right_child;
//        }
//    }
//    last->next = nullptr;
//    cout << endl;
//    while (root->left_child) {
//        root = root->left_child;
//    }
//    root->prev = nullptr;
//    while (root) {
//        cout << root->value << " ";
//        root = root->next;
//    }
//}
//
////AVL树类型
//void show_insert_type(BTreeNode* node) {
//    //递归
//    //BTreeNode* p = node->parent;
//    //if (p->value != -1) {
//    //    if (abs(tree_depth(p->left_child) - tree_depth(p->right_child)) <= 1) {
//    //        show_insert_type(p);
//    //    }
//    //    else {
//    //        if (tree_depth(p->left_child) > tree_depth(p->right_child)) {
//    //            if (tree_depth(p->left_child->left_child) > tree_depth(p->left_child->right_child))
//    //                cout << p->value << " LL" << endl;
//    //            else {
//    //                cout << p->value << " LR" << endl;
//    //            }
//    //        }
//    //        else {
//    //            if (tree_depth(p->right_child->left_child) > tree_depth(p->right_child->right_child))
//    //                cout << p->value << " RL" << endl;
//    //            else {
//    //                cout << p->value << " RR" << endl;
//    //            }
//    //        }
//    //    }
//    //}
//    //else
//    //    cout << "None" << endl;
//
//    //非递归
//	int flag = 0;
//	BTreeNode* parent = nullptr;
//	BTreeNode* p = node;
//	while (p->value != -1) {
//		if (abs(tree_depth(p->left_child) - tree_depth(p->right_child)) <= 1)
//			p = p->parent;
//		else {
//			if (tree_depth(p->left_child) - tree_depth(p->right_child) > 0) {
//				if (tree_depth(p->left_child->left_child) - tree_depth(p->left_child->right_child) > 0)
//					cout << p->value << " LL" << endl;
//				else
//					cout << p->value << " LR" << endl;
//			}
//			else {
//				if (tree_depth(p->right_child->left_child) - tree_depth(p->right_child->right_child) > 0)
//					cout << p->value << " RL" << endl;
//				else
//					cout << p->value << " RR" << endl;
//			}
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << "None" << endl;
//}
//
////AVL树的调整
//void rotate_rr(BTreeNode* node) {
//    BTreeNode* t = node->right_child;
//    if (node != NULL) {
//        node->right_child = t->left_child;
//        if (t->left_child)
//            t->left_child->parent = node;
//        t->parent = node->parent;
//        if (t->parent)
//            if (t->parent->left_child == node)
//                t->parent->left_child = t;
//            else
//                t->parent->right_child = t;
//        node->parent = t;
//        t->left_child = node;
//        node->height = max(tree_depth(node->left_child), tree_depth(node->right_child)) + 1;
//        t->height = max(tree_depth(t->right_child), node->height) + 1;
//    }
//}
//
//void rotate_ll(BTreeNode* node) {
//    if (node != NULL) {
//        BTreeNode* a = node->left_child;
//        node->left_child = a->right_child;
//        if (a->right_child)
//            a->right_child->parent = node;
//        a->parent = node->parent;
//        if (a->parent)
//            if (a->parent->left_child == node)//将t父节点的左或右儿子指向node
//                a->parent->left_child = a;
//            else
//                a->parent->right_child = a;
//        node->parent = a;
//        a->right_child = node;
//        node->height = max(tree_depth(node->left_child), tree_depth(node->right_child)) + 1;
//        a->height = max(tree_depth(a->left_child), node->height) + 1;
//    }
//}
//
//void rotate_rl(BTreeNode* node) {
//    BTreeNode* t = node->right_child;
//    rotate_ll(t);
//    rotate_rr(node);
//}
//
//void rotate_lr(BTreeNode* node) {
//    BTreeNode* t = node->left_child;
//    rotate_rr(t);
//    rotate_ll(node);
//}
//
////BTreeNode* create_tree(istream& in) {
////    map<int, BTreeNode*> node_map;
////    int value, parent;
////    char c;
////    in >> value; // root
////    BTreeNode* root = new BTreeNode(value);
////    node_map[value] = root;
////    while (true) {
////        in >> value >> c >> parent;
////        if (!in) {
////            break;
////        }
////        BTreeNode* p_node = node_map[parent];
////        if (c == 'l') {
////            BTreeNode* node = insert_lchild(p_node, value);
////            node_map[value] = node;
////        }
////        else {
////            BTreeNode* node = insert_rchild(p_node, value);
////            node_map[value] = node;
////        }
////    }
////    return root;
////}
//
//int main255451512124() {
//    BTreeNode* root = nullptr;
//    root = new BTreeNode(-1);
//    BTreeNode* node1 = insert_rchild(root, 2);
//    BTreeNode* node2 = insert_lchild(node1, 1);
//    BTreeNode* node3 = insert_rchild(node1, 4);
//    BTreeNode* node4 = insert_lchild(node3, 3);
//    BTreeNode* node5 = insert_rchild(node3, 6);
//    BTreeNode* node6 = insert_lchild(node5, 5);
//
//    node1->parent = root;
//    node2->parent = node1;
//    node3->parent = node1;
//    node4->parent = node3;
//    node5->parent = node3;
//    node6->parent = node5;
//
//    print_btree_value(root);
//    //AVL树调整类型
//    show_insert_type(node6);
//
//    //哈夫曼编码
//    //string str;
//    //char ch;
//    //map<char, int> cnt;
//    //string::iterator i;
//    //map<char, int>::iterator it;
//    //while ((ch = getchar()) != EOF)
//    //    str += ch;
//    //for (i = str.begin(); i != str.end(); i++)
//    //    cnt[*i]++;
//    //vector<int> huffman;
//    //for (it = cnt.begin(); it != cnt.end(); it++)
//    //    huffman.push_back(it->second);
//    //root = create_huffman_tree(huffman);
//    //int k = tree_depth(root);
//    //print_btree_value(root);
//    //cout << cnt.size() << endl;
//    //cout << huffman_value_length(root, 0) << endl;
//    //map<char, int> cnt1 = cnt;
//    //string s;
//    //int** m = new int*[256];
//    //for (int i = 0; i < 256; i++) {
//    //    m[i] = new int[k + 1];
//    //    memset(m[i], -1, sizeof(int) * k);
//    //}
//    //huffman_encode(root, 0, m, cnt1);
//    ////streambuf* backup;
//    ////fstream out("out.txt"); //输出重定向到out.txt
//    ////backup = cout.rdbuf(out.rdbuf());
//    //int p = 0;
//    //for (i = str.begin(); i != str.end();) {
//    //    it = cnt.find(*i);
//    //    for (int k = 0; k < it->second; k++) {
//    //        if (i == str.end())
//    //            break;
//    //        while (m[(int)*i][p] == 0 || m[(int)*i][p] == 1) {
//    //            cout << m[(int)*i][p];
//    //            s += m[(int)*i][p++] + '0';
//    //        }
//    //        p = 0;
//    //        if (i != str.end())
//    //            i++;
//    //    }
//    //}
//    ////cout.rdbuf(backup); //输出重定向到控制台
//    ////cout << endl << s << endl;
//    ////ifstream in("out.txt");
//    ////while ((ch = in.get()) != EOF)
//    ////    s += ch;
//    //huffman_decode(m, str, s);
//    ////out.close();
//
//    //二叉搜索树
//    //int a;
//    //cin >> a;
//    //BST_insert_no_recur(root, a);
//    //while (cin >> a) {
//    //    BST_insert_no_recur(root, a);
//    //    //walk_BST_insert(root, a);
//    //    char ch = getchar();
//    //    if (ch == '\n')
//    //        break;
//    //}
//    //print_btree_value(root);
//    //int value;
//    //cin >> value;
//    //BST_delete_no_recur(root, value);
//    //print_btree_value(root);
//    //cout << endl;
//
//    //线索化
//    //print_btree_value(root);
//    //build_threads_vlr(root);
//    //cout << endl;
//    //build_threads_lvr(root);
//    //cout << endl;
//    //build_threads_lrv(root);
//    //cout << endl;
//    //cout << root->value;
//    return 0;
//}