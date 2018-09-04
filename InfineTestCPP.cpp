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
}
// -- END OF STEP 1 --

// -- STEP 2 --
int countPrimeIn4Thread(int last) {

}
//-- END OF STEP 3 --

//STEP 3
std::set<int> getPrimeInSetSimple(int first, int last) {

}

std::set<int> getPrimeInSet4Thread(int last) {

}
//-- END OF STEP 3 --

int main(int argc, char** argv) {
	int upper_limit = 1000000;
	if (argc > 1) upper_limit = std::atoi(argv[1]);

	// Step 1 : mono thread
	auto start = std::chrono::steady_clock::now();
	auto primaries_nr = countPrimeSimple(2, upper_limit);
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
			std::chrono::steady_clock::now() - start);
	std::cout << "Step1 " <<upper_limit << ":Primaries=" << primaries_nr << " Time=" << duration.count() << std::endl;

	// Step 2 : Multi thread
	start = std::chrono::steady_clock::now();
	primaries_nr = countPrimeIn4Thread(upper_limit);
	duration = std::chrono::duration_cast<std::chrono::milliseconds>(
			std::chrono::steady_clock::now() - start);
	std::cout << "Step2 " << upper_limit << ":Primaries=" << primaries_nr << " Time=" << duration.count() << std::endl;

	// Step 3 : Multi thread with a returned set
	start = std::chrono::steady_clock::now();
	auto primeSet = getPrimeInSet4Thread(upper_limit);
	duration = std::chrono::duration_cast<std::chrono::milliseconds>(
			std::chrono::steady_clock::now() - start);
	std::cout << "Step3 " << upper_limit << ":Primaries=" << primeSet.size() << " Time=" << duration.count() << std::endl;
}

