#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	

	/*
	while (not eof)
		add += total
		if(next line blank)
			insert add to array(position)
			reset add to 0
			increase position tracker
		
	-> end while loop
	find largest item in array(or vector)
	print it out
	*/
	
	int insertPosition = 0;
	int totalCalories = 0;
	int current = 0;
	vector<int> keepTrack;
	string input;
	
	while(!cin.eof() && getline(cin, input)) {
//		totalCalories += stoi(input);

		if(!input.empty()) {
			totalCalories += stoi(input);
		}
		 else {
			keepTrack.push_back(totalCalories);
                        totalCalories = 0;
		}

//		cout << "Running total: " << totalCalories << endl;
	}
	
	std::sort(keepTrack.begin(), keepTrack.end());
		

	for(int i = 0; i < 3; ++i) {
		current += keepTrack.back();
		keepTrack.pop_back();
	}
	cout << "Largest: " << *max_element(keepTrack.begin(), keepTrack.end()) 
	     << endl;	
	cout << "Top 3: " << current << endl;
	

	return 0;

}
