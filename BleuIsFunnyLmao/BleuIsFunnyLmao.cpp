#include <iostream>
#include <cpr/cpr.h>

int main()
{
    cpr::Response r = cpr::Post(cpr::Url{ "https://tremendous-ivy-dogsled.glitch.me/api/register" },
        cpr::Header{
            { "Content-Type", "application/json" }
        },
        cpr::UserAgent("Hideaki Atsuyo"),
        cpr::Body("{\"username\": \"test\", \"email\": \"test@example.com\", \"password\": \"test\"}"));
    if (r.text.find("ACCOUNT_CREATED") != std::string::npos) {
        std::cout << "Success !" << std::endl;
    }
    else {
        std::cout << "Failed !" << std::endl;
    }
    system("pause");
    return 0;
}