Question ParagraphSam wants to create a class called WeatherForecast that contains weather information. The class should have attributes: country code (integer), and its temperature (float). He wants to implement member functions to add the weather information and display the country code having the lowest temperature. Help him write the code. Assume that the temperature is measured in Celsius�.Input format:The first line consists of an integer N, representing the number of locations.The following lines consist of the country code (integer) and temperature (float value) separated by a new line for N locations.Output format:The output prints an integer representing the country code with the lowest temperature.Sample Test CaseInput 1:4
101
25.5
102
20.8
103
18.9
104
18.9
Output 1:103


#include <iostream>
#include <vector>
using namespace std;

class WeatherForecast {
    vector<int> countryCodes;
    vector<float> temperatures;

public:
    void initialize() {
        countryCodes.clear();
        temperatures.clear();
    }

    void addWeatherInfo(int countryCode, float temperature) {
        countryCodes.push_back(countryCode);
        temperatures.push_back(temperature);
    }

    int getColdestCountryCode() {
        int minIndex = 0;
        for (int i = 1; i < countryCodes.size(); ++i) {
            if (temperatures[i] < temperatures[minIndex])
                minIndex = i;
        }
        return countryCodes[minIndex];
    }
};

int main() {
    WeatherForecast weather;
    weather.initialize();

    int numLocations;
    std::cin >> numLocations;
    std::cin.ignore();

    int countryCode;
    float temperature;
    for (int i = 0; i < numLocations; i++) {
        std::cin >> countryCode;
        std::cin >> temperature;
        std::cin.ignore();
        weather.addWeatherInfo(countryCode, temperature);
    }

    int coldestCountryCode = weather.getColdestCountryCode();
    std::cout << coldestCountryCode;

    return 0;
}
