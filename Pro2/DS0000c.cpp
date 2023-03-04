////PREPEND BEGIN
#include <iostream>
using namespace std;
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
//        char* ret = (char*)p;
//        __global_mem_counter__++;
//        __global_mem_size__ += s;
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
//            cout << __global_mem_size__ << " size unreleased" << endl;
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
//
//#define malloc(s) __MEM_ALLOC_PTR::alloc_mem(s, 1)
//#define free(p) __MEM_ALLOC_PTR::free_mem(p, 1)

//PREPEND END

//TEMPLATE BEGIN
#include <memory.h> // 你可能会用得着
#include <vector>
void main_proc() {
    int width, height;
    cin >> width >> height;
    vector<vector<int>> array(height);
    for (int i = 0; i < array.size(); i++)
        array[i].resize(width);
    //int** array = new int* [height];
    //for (int j = 0; j < height; j++) {
    //	array[j] = new int[width]();
    //	//memset(array[j], 0, width * sizeof(int));
    //}
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < a.size(); i++)
        a[i].resize(2);
    //int** a = new int* [n];
    //for (int i = 0; i < n; i++) {
    //	a[i] = new int[2];
    //	cin >> a[i][0] >> a[i][1];
    //	array[a[i][1]][a[i][0]] = 1;
    //}
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        array[a[i][1]][a[i][0]] = 1;
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << array[i][j];
        }
        cout << endl;
    }
    //for (int i = 0; i < height; i++) {
    //	delete[] array[i];
    //	array[i] = nullptr;
    //}
    //delete[] array;
    //array = nullptr;
    //for (int j = 0; j < n; j++) {
    //	delete[] a[j];
    //	a[j] = nullptr;
    //}
    //delete[] a;
    //a = nullptr;
}
//TEMPLATE END

//APPEND BEGIN
int main2331545105()
{
    main_proc();
    //__MEM_ALLOC_PTR::check_mem();//内存泄漏监测
    return 0;
}
//APPEND END

