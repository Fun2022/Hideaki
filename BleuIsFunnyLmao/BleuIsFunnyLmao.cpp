#include <iostream>
#include <cpr/cpr.h>

int main()
{
    cpr::Response r = cpr::Post(cpr::Url{ "https://blue-bypassme.herokuapp.com/api/register" },
        cpr::Header{
            { "Content-Type", "application/json" }
        },
        cpr::UserAgent("Hideaki Atsuyo"),
        cpr::Body("{\"username\": \"Hideaki\", \"email\": \"testg@example.com\", \"password\": \"Password123.@\", \"confirmpassword\": \"Password123.@\"}"));
    if (r.text.find("ACCOUNT_CREATED") != std::string::npos) {
        std::cout << "Success !" << std::endl << r.text << std::endl;
    }
    else {
        std::cout << "Failed !" << std::endl << r.text << std::endl;
    }
    system("pause");
    return 0;
}
