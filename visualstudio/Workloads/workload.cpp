#include <iostream> //basic I/O
#include <chrono>//used for timers
#include <Windows.h>//used also for timers and for threads
#include <thread>//used to implement threads
#include <ctime>//used as another type of timer
#include <ratio>//used with ctime for a timer

//turns off warnings for depreciated code
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

//set up standard namespace and timer namespace
using namespace std;
using namespace std::chrono;

//Tell C++ that these functions will come from an external
//source
extern "C" int additionwl();
extern "C" int subtractionwl();
extern "C" int multiplicationwl();
extern "C" int divisionwl();

//used to pause the program at the end
int n;

//These are the codes that windows uses to identify
//different processors
/*cpu    CPU number
  1          1
  2          2
  3          4
  4          8
  5          16
  6          32
  7          64
  8          128*/

//Functions defining workloads for each cpu.
//By calling each function in a thread, it will ensure
//that this function only runs on the designated cpu.

//You can add or subtract workloads by commenting out
//the workloads additionwl(), subtractionwl() etc.
void cpu1() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 1

	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 1;//set the active CPU to 1
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 1
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority


	//run the workload
	cout << "Workload Started on CPU 1" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 1" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 1 was: " << duration.count() << " seconds" << endl;
}

void cpu2() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 2
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 2;//set the active CPU to 2
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 2
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 2" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 2" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 2 was: " << duration.count() << " seconds" << endl;
}

void cpu3() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 3
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 4;//set the active CPU to 3
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 3
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 3" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 3" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 2 was: " << duration.count() << " seconds" << endl;
}

void cpu4() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 4
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 8;//set the active CPU to 4
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 4
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 4" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 4" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 4 was: " << duration.count() << " seconds" << endl;
}

void cpu5() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 5
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 16;//set the active CPU to 5
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 5
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 5" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 5" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 5 was: " << duration.count() << " seconds" << endl;
}

void cpu6() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 6
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 32;//set the active CPU to 6
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 6
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 6" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 6" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 6 was: " << duration.count() << " seconds" << endl;
}

void cpu7() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 7
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 64;//set the active CPU to 7
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 7
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 7" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 7" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 7 was: " << duration.count() << " seconds" << endl;
}

void cpu8() {
	auto start = high_resolution_clock::now();//start a timer

	//CPU 8
	HANDLE thread = GetCurrentThread();//find the current thread
	DWORD_PTR threadAffinityMask = 128;//set the active CPU to 8
	BOOL success = SetThreadAffinityMask(thread, threadAffinityMask);//set the active CPU to 8
	SetPriorityClass(GetCurrentProcess(), THREAD_PRIORITY_TIME_CRITICAL);//give this process priority

	//run the workload
	cout << "Workload Started on CPU 8" << endl;
	//additionwl();
	//subtractionwl();
	multiplicationwl();
	//divisionwl();
	cout << endl << "Workload Completed on CPU 8" << endl;

	//measure the time and display the results
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start) / 1000000.0;
	cout << "The time elapsed for CPU 8 was: " << duration.count() << " seconds" << endl;
}





int main() {

	//Get the start time information
	using std::chrono::system_clock;
	system_clock::time_point start = system_clock::now();
	std::time_t tt;
	tt = system_clock::to_time_t(start);

	//Start each workload on a different thread
	//Each thread line creates a new "thread" object.
	//You can rename these threads however you want
	//and open as many threads on a cpu as you would like.
	//By running the cpu functions on different threads,
	//it ensures the workloads will only run on the designated
	//cpus.
	
	thread cpu1_1thread(cpu1);
	thread cpu1_2thread(cpu1);
	thread cpu1_3thread(cpu1);
	thread cpu1_4thread(cpu1);
	thread cpu1_5thread(cpu1);
	
	thread cpu2_1thread(cpu2);
	thread cpu2_2thread(cpu2);
	thread cpu2_3thread(cpu2);
	thread cpu2_4thread(cpu2);
	thread cpu2_5thread(cpu2);
	
	thread cpu3_1thread(cpu3);
	thread cpu3_2thread(cpu3);
	thread cpu3_3thread(cpu3);
	thread cpu3_4thread(cpu3);
	thread cpu3_5thread(cpu3);
	
	thread cpu4_1thread(cpu4);
	thread cpu4_2thread(cpu4);
	thread cpu4_3thread(cpu4);
	thread cpu4_4thread(cpu4);
	thread cpu4_5thread(cpu4);
	
	thread cpu5_1thread(cpu5);
	thread cpu5_2thread(cpu5);
	thread cpu5_3thread(cpu5);
	thread cpu5_4thread(cpu5);
	thread cpu5_5thread(cpu5);
	
	thread cpu6_1thread(cpu6);
	thread cpu6_2thread(cpu6);
	thread cpu6_3thread(cpu6);
	thread cpu6_4thread(cpu6);
	thread cpu6_5thread(cpu6);
	

	
	thread cpu7_1thread(cpu7);
	thread cpu7_2thread(cpu7);
	thread cpu7_3thread(cpu7);
	thread cpu7_4thread(cpu7);
	thread cpu7_5thread(cpu7);
	
	thread cpu8_1thread(cpu8);
	thread cpu8_2thread(cpu8);
	thread cpu8_3thread(cpu8);
	thread cpu8_4thread(cpu8);
	thread cpu8_5thread(cpu8);
	




	//Wait for every workload to finish before ending the program.
	
	cpu1_1thread.join();
	cpu1_2thread.join();
	cpu1_3thread.join();
	cpu1_4thread.join();
	cpu1_5thread.join();
	
	
	cpu2_1thread.join();
	cpu2_2thread.join();
	cpu2_3thread.join();
	cpu2_4thread.join();
	cpu2_5thread.join();
	

	
	cpu3_1thread.join();
	cpu3_2thread.join();
	cpu3_3thread.join();
	cpu3_4thread.join();
	cpu3_5thread.join();
	
	cpu4_1thread.join();
	cpu4_2thread.join();
	cpu4_3thread.join();
	cpu4_4thread.join();
	cpu4_5thread.join();
	
	cpu5_1thread.join();
	cpu5_2thread.join();
	cpu5_3thread.join();
	cpu5_4thread.join();
	cpu5_5thread.join();
	
	cpu6_1thread.join();
	cpu6_2thread.join();
	cpu6_3thread.join();
	cpu6_4thread.join();
	cpu6_5thread.join();
	
	cpu7_1thread.join();
	cpu7_2thread.join();
	cpu7_3thread.join();
	cpu7_4thread.join();
	cpu7_5thread.join();
	
	cpu8_1thread.join();
	cpu8_2thread.join();
	cpu8_3thread.join();
	cpu8_4thread.join();
	cpu8_5thread.join();
	




	//Get end time information and display the results
	cout << endl << endl << endl;
	std::cout << "The start time was: " << ctime(&tt);

	system_clock::time_point end = system_clock::now();
	std::time_t tt2;
	tt2 = system_clock::to_time_t(end);
	std::cout << "The end time was: " << ctime(&tt2);
	


	cout << "Enter any key to continue..."<<endl;
	cin >> n;

	
	return 0;
}
