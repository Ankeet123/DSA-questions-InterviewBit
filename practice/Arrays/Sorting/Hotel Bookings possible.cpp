// A hotel manager has to process N advance bookings of rooms for the next season. His hotel has C rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand. Write a program that solves this problem in time O(N log N) .



// Input Format
// First argument is an integer array A containing arrival time of booking.

// Second argument is an integer array B containing departure time of booking.

// Third argument is an integer C denoting the count of rooms.



// Output Format
// Return True if there are enough rooms for N bookings else return False.

// Return 0/1 for C programs.
#include<vector>
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{

    int N = arrive.size();
    // assert(N>=1 && N<=1000000);
    vector<pair<int, int> > vec;
    for(int i = 0; i < N; ++i) {
        vec.push_back(make_pair(arrive[i], 0));
        vec.push_back(make_pair(depart[i], 1));
    }
     
    sort(vec.begin(), vec.end());
    
    int curActive = 0;
    int maxAns = 0;
    for (int i = 0; i < vec.size(); i++) {
       if (vec[i].second == 0) { // arrival
           curActive++;
           maxAns = max(maxAns, curActive);
        } else {
            curActive--;
        }
    } 
    if (K >= maxAns) return true;
    return false;
}