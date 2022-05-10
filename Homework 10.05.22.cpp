#include <iostream>
using namespace std;

int main()
{
    /*setlocale(0, "UKR");
    double deposit;
    double percent;
    cout << "Укажите сумму вклада в гривнах: ";
    cin >> deposit;
    cout << "Укажите процент годовых: ";
    cin >> percent;
    percent = (percent / 100.0) / 12;
    cout << "\nЕжемесячная выплата: " << deposit * percent << "\n";*/

   /*setlocale(0, "UKR");
    int price;
    int money;
    
    cout << "Укажите стоимость единицы товара: ";
    cin >> price;
    cout << "Укажите количество денег: ";
    cin >> money;

    int remainder = price % money;

    cout << "\nСдача: " << remainder << "\n";*/

    setlocale(0, "UKR");
    double length;
    double width;
    double height;
    double paint;
    double percent;
    double price;
    cout << "Укажите длину комнаты в метрах: ";
    cin >> length;
    cout << "Укажите ширину комнаты в метрах: ";
    cin >> width;
    cout << "Укажите высоту комнаты в метрах: ";
    cin >> height;
    cout << "Укажите количество краски, расходуемое на 1м^2 стены: ";
    cin >> paint;
    cout << "Укажите стоимость одного литра краски: ";
    cin >> price;
    cout << "Укажите, какой процент поверхности стен занимают окна и двери: ";
    cin >> percent;

    double percent1 = 1.0 - (percent / 100);

    double result = (2 * (width * height + height * length)) * percent1 * paint;
    double total = result * price;

    cout << "\nКоличество краски, которое вам необходимо: " << result << " л." << "\n";
    cout << "\nИтоговая стоимость покраски: " << total << "\n";
    
}
