// link of Question
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

#include <bits/stdc++.h>

using namespace std;

int get_seat_no(int);
int get_seat_type(int);

int main() {
	int t,j;
	cin >> t;
	for(j=0; j<t; j++){
	    int current_seat_no,opp_seat_no;
	    cin >> n;
	    opp_seat_no = get_seat_no(current_seat_no);
      string seat_type = get_seat_type(opp_seat_no);
      cout << opp_seat_no << seat_type;
	}
}

string get_seat_type(int opp_seat_no){
  int m = opp_seat_no % 6;
  if (m==0 || m==1 ) return " WS\n";
  else if (m==2 || m==5 ) return " MS\n";
  else if (m==4 || m== 3 ) return " AS\n";
}

int get_seat_no(int current_seat_no){
    int disp[] = { 1, 3, 5, 7, 9, 11 }; 
    int mod_res,index;
    mod_res = current_seat_no%12;
    if (mod_res == 0) return (current_seat_no-11);
    else if (mod_res > 6){
        index = (current_seat_no%6)-1;
        return (current_seat_no-(disp[index]));
    }
    else return (current_seat_no+(disp[6-mod_res]));
}
