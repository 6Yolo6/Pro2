////PREPEND BEGIN
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <queue>
//#include <map>
//using namespace std;
//
//struct __MEM_ALLOC_PTR {
//    unsigned int header;
//    size_t size;
//    int    type;
//    static void* alloc_mem(size_t s, int type) {
//        size_t full_size = sizeof(__MEM_ALLOC_PTR) + s;
//        void* p = malloc(full_size);
//        __MEM_ALLOC_PTR* header = (__MEM_ALLOC_PTR*)p;
//        header->header = 0xcdcdcdcd; // magic number
//        header->size = s;
//        header->type = type; // 1 for new, 2 for new[]
//        __global_mem_counter__++;
//        __global_mem_size__ += s;
//        char* ret = (char*)p;
//        ret += sizeof(__MEM_ALLOC_PTR);
//        return ret;
//    }
//    static void free_mem(void* p, int type) {
//        char* offset = (char*)p;
//        offset -= sizeof(__MEM_ALLOC_PTR);
//        __MEM_ALLOC_PTR* header = (__MEM_ALLOC_PTR*)offset;
//        __global_mem_size__ -= header->size;
//        __global_mem_counter__--;
//        if (type != header->type) {
//            cout << "type error! mixed use of new[]/delete or new/delete[]" << endl;
//        }
//        free(offset);
//    }
//    static void check_mem() {
//        if (__global_mem_counter__ != 0 || __global_mem_size__ != 0) {
//            cout << "memory leak detected:" << endl;
//            cout << __global_mem_counter__ << " blocks unreleased" << endl;
//            cout << __global_mem_size__ << " bytes unreleased" << endl;
//        }
//    }
//private:
//    static int __global_mem_counter__;
//    static int __global_mem_size__;
//};
//int __MEM_ALLOC_PTR::__global_mem_counter__ = 0;
//int __MEM_ALLOC_PTR::__global_mem_size__ = 0;
//
//void* operator new(size_t s) {
//    return __MEM_ALLOC_PTR::alloc_mem(s, 1);
//}
//
//void* operator new[](size_t s) {
//    return __MEM_ALLOC_PTR::alloc_mem(s, 2);
//}
//
//void operator delete(void* p) noexcept {
//    __MEM_ALLOC_PTR::free_mem(p, 1);
//}
//void operator delete[](void* p) noexcept {
//    __MEM_ALLOC_PTR::free_mem(p, 2);
//}
//struct __MEM_REPORTER {
//    ~__MEM_REPORTER() {
//        __MEM_ALLOC_PTR::check_mem();
//    }
//} __mem_repoter__;
//
//#define malloc(s) __MEM_ALLOC_PTR::alloc_mem(s, 1)
//#define free(p) __MEM_ALLOC_PTR::free_mem(p, 1)
//
//struct BTreeNode {
//    int value;
//    BTreeNode* left_child;
//    BTreeNode* right_child;
//	  BTreeNode* prev;
//    BTreeNode* next;
//    BTreeNode()
//        :value(0)
//        , left_child(nullptr)
//        , right_child(nullptr)
//        , prev(nullptr)
//        , next(nullptr)
//    {}
//    BTreeNode(int v)
//        :value(v)
//        , left_child(nullptr)
//        , right_child(nullptr)
//        , prev(nullptr)
//        , next(nullptr)
//    {}
//};
//
//BTreeNode* insert_lchild(BTreeNode* node, int value) {
//    node->left_child = new BTreeNode(value);
//    return node->left_child;
//}
//
//BTreeNode* insert_rchild(BTreeNode* node, int value) {
//    node->right_child = new BTreeNode(value);
//    return node->right_child;
//}
//
//BTreeNode* create_tree(istream& in) {
//    map<int, BTreeNode*> node_map;
//    int value, parent;
//    char c;
//    in >> value; // root
//    BTreeNode* root = new BTreeNode(value);
//    node_map[value] = root;
//    while (true) {
//        in >> value >> c >> parent;
//        if (!in) {
//            break;
//        }
//        BTreeNode* p_node = node_map[parent];
//        if (c == 'l') {
//            BTreeNode* node = insert_lchild(p_node, value);
//            node_map[value] = node;
//        }
//        else {
//            BTreeNode* node = insert_rchild(p_node, value);
//            node_map[value] = node;
//        }
//    }
//    return root;
//}
//
////PREPEND END
//
////TEMPLATE BEGIN
////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////    BTreeNode()
////        :value(0)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////    BTreeNode( int v )
////        :value(v)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////};
//
//enum TNode
//{
//    left,
//    right
//};
//
//struct FlagNode {
//    BTreeNode* node;
//    TNode Tnode;
//};
//
//// 计算树的深度（高度）
//int tree_depth(BTreeNode* root) {
//    if (!root)
//        return 0;
//    else {
//        return max(tree_depth(root->left_child), tree_depth(root->right_child)) + 1;
//    }
//}
//
//// 销毁树
//void destroy_tree(BTreeNode* root) {
//    if (root) {
//        destroy_tree(root->left_child);
//        destroy_tree(root->right_child);
//        delete root;
//        root = nullptr;
//    }
//}
//
//// 先序遍历
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
//// 中序遍历
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
//// 后序遍历
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
////非递归后序遍历
//void walk_tree_lrv_no_recur(BTreeNode* root) {
//	//stack<BTreeNode*> s;
//	//BTreeNode* cur, * last;
//	//cur = root;
//	//last = nullptr;
//	//while (!s.empty() || cur) {
// //       //当前节点移到左下角
// //       while (cur) {
// //           s.push(cur);
// //           cur = cur->left_child;
// //       }
//	//	cur = s.top();
//	//	if (cur->right_child == nullptr || cur->right_child == last) {
//	//		cout << cur->value << " ";
// //           s.pop();
//	//		last = cur;
// //           cur = nullptr;
//	//	}
//	//	else 
//	//		cur = cur->right_child;
//	//}
//
//    stack<FlagNode> s;
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
//    }
//}
//
//BTreeNode* thread_vlr(BTreeNode* root, BTreeNode* prev) {
//    if (prev) {
//        prev->next = root;
//        root->prev = prev;
//    }
//    cout << root->value << " ";
//    BTreeNode* last = root;
//    if (root->left_child)
//        last = thread_vlr(root->left_child, root);
//    if (root->right_child)
//        last = thread_vlr(root->right_child, last);
//    return last;
//}
//
//// 构造中序线索
//void build_threads_lvr(BTreeNode* root) {
//
//}
//
//
//
////TEMPLATE END
//
////APPEND BEGIN
//int main()
//{
//    int n;
//    cin >> n;
//    BTreeNode* root = create_tree(cin);
//    cout << tree_depth(root) << endl;
//    if (n == 1 || n == 4) {
//        walk_tree_vlr(root);
//        cout << endl;
//    }
//    if (n == 2 || n == 4) {
//        walk_tree_lvr(root);
//        cout << endl;
//    }
//    if (n == 3 || n == 4) {
//        walk_tree_lrv(root);
//        cout << endl;
//    }
//    if (n == 5) {
//        walk_tree_bfs(root);
//        cout << endl;
//    }
//    if (n == 6 || n == 9) {
//        walk_tree_vlr_no_recur(root);
//        cout << endl;
//    }
//    if (n == 7 || n == 9) {
//        walk_tree_lvr_no_recur(root);
//        cout << endl;
//    }
//    if (n == 8 || n == 9) {
//        walk_tree_lrv_no_recur(root);
//        cout << endl;
//    }
//    destroy_tree(root);
//    return 0;
//}
//
////APPEND END
//
