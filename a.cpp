#include <iostream>
#include <string>
#include <vector>

class Car {
private:
    std::string name; // 차량의 이름
    int oil;          // 기름의 양
    int speed;        // 현재 속도
    std::string kind;

public:
    // 생성자: 멤버 이니셜라이저 리스트를 사용하여 멤버 변수 초기화
    Car(std::string initName, int initOil, int initSpeed, std::string initkind)
        : name(initName), oil(initOil), speed(initSpeed), kind(initkind) {

    }

    // 멤버 함수를 사용하여 멤버 변수의 값을 출력
    void displayStatus() const {
        std::cout << "Name: " << name << ", Oil: " << oil << ", Speed: " << speed << std::endl;
    }

    void Space(){
        
    }
};

int main() {
    // 'Car' 객체 생성 및 초기화
    Car myCar1("Toyota", 50, 250);
    Car myCar2("mor", 10, 40);
    Car myCar3("sun", 30, 80);
    
    std::vector<Car> car_list;

    for (int i = 0; i < 100; i++){
        car_list.push_back(Car("Toyota", i, 250));
    }
    car_list[54].displayStatus();
    // 상태 출력
    

    return 0;
}
