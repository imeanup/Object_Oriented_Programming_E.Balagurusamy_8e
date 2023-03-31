#include <iostream>
using namespace std;

int main() {
   const int numCandidates = 5;
   int count[numCandidates] = {0}; // Array to store vote count for each candidate
   int ballot, spoiltBallots = 0;

   cout << "Enter the candidate number (1 to 5) for each ballot (0 to end): " << endl;
   cin >> ballot;
   while (ballot != 0) {
      if (ballot >= 1 && ballot <= numCandidates) {
         count[ballot - 1]++;        
      } else {
         spoiltBallots++;
      }
      cin >> ballot;
   }

   cout << "Vote count for each candidate:" << endl;
   for (int i = 0; i < numCandidates; i++) {
      cout << "Candidate " << i + 1 << ": " << count[i] << endl;
   }
   cout << "Spoilt ballots: " << spoiltBallots << endl;

   return 0;
}
