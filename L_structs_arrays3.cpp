#include <iostream>
using namespace std;

const int N = 3;  // Number of teams
const int M = 2;  // Number of members in each team
const int K = 3;  // Number of exams

struct Team {
  int number;
  int record[M];
  float grades[K];
  float average;
};

void displayData(Team teams[], int n) {
  cout <<"----------------------------------" << endl;
  cout << "Teams data:" << endl;
  cout <<"----------------------------------" << endl;
  for (int i = 0; i < n; i++) {
    cout << "Team " << i + 1 << endl;
    cout << "Members ID: ";
    for (int j = 0; j < M; j++) {
      cout << teams[i].record[j] << " ";
    }
    cout << endl;
    cout << "Grades: ";
    for (int j = 0; j < K; j++) {
      cout << teams[i].grades[j] << " ";
    }
    cout << endl;
    cout << "Average: " << teams[i].average << endl;
    cout << endl;
  }
}

int main() {
  Team teams[N];

  // Ask for data of each team
  for (int i = 0; i < N; i++) {
    cout << "Data of team " << i + 1 << ":" << endl;
    
    for (int j = 0; j < M; j++) {
      cout << "ID of member " << j + 1 << ": ";
      cin >> teams[i].record[j];
    }

    float sum = 0;
    for (int j = 0; j < K; j++) {
      cout << "Grade of exam " << j + 1 << ": ";
      cin >> teams[i].grades[j];
      sum += teams[i].grades[j];
    }
    teams[i].average = sum / K;
    cout << endl;
  }

  // Pass the array struct to the function
  displayData(teams, N);

  return 0;
}

