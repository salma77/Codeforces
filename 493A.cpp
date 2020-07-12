
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//variables
	string home, away;

	cin >> home >> away;

	int minutes[90],fouls_a[100], fouls_h[100], n;
	map<int, int> player_h;
	map<int, int> player_a;
	char team[90], color[90];
	int p;

	cin >> n;

	//initializing all red fouls with zero
	for (int i = 0; i < 100; i++) {
		fouls_a[i] = 0;
		fouls_h[i] = 0;
	}
	
	//looping for inputs
	for (int i = 0; i < n; i++) {

		cin >> minutes[i] >> team[i] >> p >> color[i];

		//filling the maps

		if(team[i]=='a')
			player_a.insert(pair<int, int>(p, 0));
		else if(team[i]=='h')
			player_h.insert(pair<int, int>(p, 0));


		//counting number of yellow card fouls
		
			
		if (team[i] == 'a' && color[i] == 'y') {
			player_a[p]+= 1;
		}
		else if (team[i] == 'h' && color[i] == 'y' ) {
			player_h[p] += 1;
		}
		

		//conditions for printing a foul

		if (team[i] == 'a' && color[i] == 'r' && fouls_a[p]<=0) {
			cout << away << " " << p << " " << minutes[i] << "\n";
			fouls_a[p]++;
		}
		else if (team[i] == 'h' && color[i] == 'r' && fouls_h[p] <= 0) {
			cout << home << " " << p << " " << minutes[i] << "\n";
			fouls_h[p]++;
		}
		else if (team[i] == 'a' && player_a[p]>=2 && fouls_a[p] <= 0) {
			cout << away << " " << p << " " << minutes[i] << "\n";
			player_a[p] = 0;
			fouls_a[p]++;
		}
		else if (team[i] == 'h' && player_h[p] >= 2 && fouls_h[p] <= 0) {
			cout << home << " " << p << " " << minutes[i] << "\n";
			player_h[p] = 0;
			fouls_h[p]++;
		}


	}
	
	

}