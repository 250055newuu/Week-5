#include <iostream>
#include <cmath>
using namespace std;

//problem 11
//
// int main() {
//     int n;
//     int ctrPos = 0;
//     int ctrNeg = 0;
//     int theTotal = 0;
//     double sumPos = 0;
//     double sumNeg = 0;
//     double average = 0;
//     int theTotalNumber = 0;
//
//     while (true) {
//         cout << "Enter a number: ";
//         cin >> n;
//         if (n > 0) {
//             ctrPos++;
//             sumPos += n;
//         }
//         else if (n < 0) {
//             ctrNeg++;
//             sumNeg += n;
//         }
//         else {
//             break;
//         }
//     }
//     theTotalNumber = ctrPos+ ctrNeg;
//     theTotal = sumNeg + sumPos;
//     average = ((sumPos + sumNeg) / theTotalNumber);
//
//     cout << "The number of positives is " << ctrPos << endl;
//     cout << "The number of negatives is " << ctrNeg << endl;
//     cout << "The total is " << theTotal << endl;
//     cout << "The average is " << average << endl;
// }



//problem 12 YES
//
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int ctr = 0;
//
//     for (int i = 1; i <= n; i++) {
//         cout << "*";
//         ctr++;
//         if (ctr % 4 == 0) {
//             cout << endl;
//         }
//
//     }
// }



//problem 13 YES
//
// int main() {
//     int n;
//     cout << "Enter the number: " << endl;
//     cin >> n;
//
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



//problem 14 YES
//
 // int main() {
 //     int n;
 //     cout << "Enter the number: ";
 //     cin >> n;
 //
 //     if (n == 0) {
 //         cout << "The depth is 0" << endl;
 //     }
 //     for (int i = 1; i <= n; i++) {
 //         for (int j = 1; j <= i; j++) {
 //             cout << i;
 //         }
 //         cout << endl;
 //     }
 // }



//problem 15 YES
//
// int main() {
//     float n;
//     cout << "Enter the number: " << endl;
//     cin >> n;
//     float sum = 0;
//     float quotient;
//     float i = 1;
//
//     while (i <= n) {
//         float quotient = (1/i);
//         cout << 1 << "/"  << i <<  " + ";
//         sum = sum + quotient;
//         i++;
//     }
//     cout << "The sum is " << sum << endl;
// }



//problem 16 YES
//
// int main() {
//     double rentPrice = 1000;
//     int year = 1;
//     int newPrice = 1000;
//
//     while (year <= 5) {
//         if (rentPrice == newPrice) {
//             cout << "For year " << year << " rent is " << newPrice << endl;
//         }
//         year++;
//         if (year > 1) {
//             newPrice = newPrice * 1.03;
//             cout << "For year " << year << " rent is " << newPrice << endl;
//         }
//     }
// }



//problem 17 YES
//
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//
//     int sum = 0;
//     int original = n;
//
//     while (n != 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//
//     cout << "Sum of digits of " << original << " = " << sum;
// }



//problem 19 YES
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n /= i;
//         }
//     }
// }

//problem 22 YES
//
// int main() {
//     cout << "Miles  Kilometers\n";
//
//     for (int i = 1; i <= 10; i++) {
//         cout << i << "      " << i * 1.609 << "\n";
//     }
// }

//problem 24
//





