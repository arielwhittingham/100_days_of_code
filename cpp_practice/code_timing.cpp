#include <chrono>
#include <iostream>
#include <string>

//source: https://www.learncpp.com/cpp-tutorial/timing-your-code/

using namespace std;

/*
Custom time class:
*/

class Timer {

    private:
    //type aliases
    using Clock = std::chrono::steady_clock;
	using Second = std::chrono::duration<double, std::ratio<1>>;
    std::chrono::time_point<Clock> m_beg { Clock::now() };

    public:
    void reset() {
        m_beg = Clock::now();
    }

    double elapsed() const {
		return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
	}
};

int main() {

    Timer s;
    std::string x;
    std::cout << "Input something: " << std::endl;
    cin >> x;

    std::cout << "Time elapsed: " << s.elapsed() << std::endl;

    return 0;

}