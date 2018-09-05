#include <iostream>
#include <chrono>
#include <limits>
#include <cmath>
#include <functional>
#include <future>
#include <set>

///
/// IMPLEMENTATION
///


// -- STEP 1 --
int countPrimeSimple(int first, int last) {
  return 0;
}
// -- END OF STEP 1 --

// -- STEP 2 --
int countPrimeIn4Thread(int last) {
  return 0;
}
//-- END OF STEP 3 --

//STEP 3
std::set<int> getPrimeInSetSimple(int first, int last) {
	  return std::set<int>();
}

std::set<int> getPrimeInSet4Thread(int last) {
  return std::set<int>();
}
//-- END OF STEP 3 --



// -- TEST ENVIRONEMENT --
#define START_TIMER()  { \
		auto start = std::chrono::steady_clock::now();

#define END_TIMER_AND_PRINT(step, nr) \
		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( \
				std::chrono::steady_clock::now() - start); \
		std::cout << step << upper_limit << ":Primaries=" << nr << " Time=" << duration.count() << std::endl; \
}


int main(int argc, char** argv) {
	int upper_limit = 1000000;
	if (argc > 1) upper_limit = std::atoi(argv[1]);

	// Step 1 : mono thread
	START_TIMER();
	auto prime_nr = countPrimeSimple(2, upper_limit);
	END_TIMER_AND_PRINT("Step 1 ", prime_nr);

	// Step 2 : Multi thread
	START_TIMER();
	auto prime_nr = countPrimeIn4Thread(upper_limit);
	END_TIMER_AND_PRINT("Step 2 ", prime_nr);

	// Step 3 : Multi thread with a returned set
	START_TIMER();
	auto primeSet = getPrimeInSet4Thread(upper_limit);
	END_TIMER_AND_PRINT("Step 3 ", primeSet.size());
}

