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
	
	std::sort(keepTrack.begin(), keepTrack.end());
		

	for(int i = 0; i < 3; ++i) {
		current += keepTrack.back();
		keepTrack.pop_back();
	}

	cout << "Largest: " << *max_element(keepTrack.begin(), keepTrack.end()) 
	     << endl;	
	cout << "Top 3 (Added up!): " << current << endl;
	

	return 0;

}
