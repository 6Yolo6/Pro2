//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct RECORD {
//	int id{ 0 };
//	std::string msg;
//};
//
//struct RECORD_QUEUE {
//	int size{ 0 };
//	int cur_record{ 0 };
//	RECORD* buf{ nullptr };
//	int last_record{ 0 };
//};
//
//void init_record_queue(RECORD_QUEUE& queue, int size) // 注意，参数是引用，内部修改会改变他的值
//{
//	queue.size = size;
//	queue.buf = new RECORD[size];
//}
//
//void log(RECORD_QUEUE& queue, const std::string& s) // 是引用传递
//{
//	if (queue.cur_record >= queue.size)
//	{
//		for (int i = 0; i < queue.cur_record - 1; i++)
//		{
//			queue.buf[i].msg = queue.buf[i + 1].msg;
//			queue.buf[i].id = queue.buf[i + 1].id;
//		}
//		queue.cur_record--;
//	}
//	queue.buf[queue.cur_record].msg = s;
//	queue.buf[queue.cur_record].id = ++queue.last_record;
//	queue.cur_record++;
//}
//	
//void destroy_record_queue(RECORD_QUEUE& queue)
//{	
//	delete[] queue.buf;
//	queue.buf = nullptr;
//}
//
//void show_logs(const RECORD_QUEUE& queue) // const引用，可读不可写
//{
//	for (int i = queue.cur_record; i > 0; i--)
//	{
//		cout << queue.buf[i - 1].id << " " << queue.buf[i - 1].msg << endl;
//	}
//}
//
//int main0001() {
//	RECORD_QUEUE queue;
//	int n, m;
//	cin >> n >> m;
//	static char buf[1024];
//	cin.getline(buf, 1024); // 跳过首行
//	init_record_queue(queue, n);
//	for (int i = 0; i < m; ++i) {
//		cin.getline(buf, 1024); 
//		log(queue, buf);
//	}
//	show_logs(queue);
//	destroy_record_queue(queue);
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
