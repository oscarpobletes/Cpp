#include <iostream>
using namespace std;

/* ask the user for the total sales and effective months worked, then it will pass these values to the avg_sales function
where it will calculate the average sales per month by dividing the total sales by the effective months.
*/

float avg_sales(float total_sales, int effective_months) {
    return total_sales / effective_months;
}

int main() {
    float total_sales;
    int effective_months;
    cout << "Enter total sales: ";
    cin >> total_sales;
    cout << "Enter effective months worked: ";
    cin >> effective_months;
    cout << "Average sales per month: " << avg_sales(total_sales, effective_months) << endl;
    return 0;
}