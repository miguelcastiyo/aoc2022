/// @author Miguel Castillo
/// @brief  AOC 2022, Day 1 Solution

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int totalCalories = 0;
	int current = 0;
	vector<int> keepTrack;
	string input;
	
	while(!cin.eof() && getline(cin, input)) {

		if(!input.empty()) {
			totalCalories += stoi(input);
		}
		 else {
			keepTrack.push_back(totalCalories);
            totalCalories = 0;
		}
	}
	
	// sorting the vector smallest -> largest
	std::sort(keepTrack.begin(), keepTrack.end());
		
	// adds up the three highest values in the keepTrack vector item
	// (also removes the elements while keeping a running total)
	for(int i = 0; i < 3; ++i) {
		current += keepTrack.back();
		keepTrack.pop_back();
	}

	cout << "Largest: " << *max_element(keepTrack.begin(), keepTrack.end()) << endl;	
	cout << "Top 3 (Added up!): " << current << endl;
	

	return 0;

}
