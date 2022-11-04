#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }

        void setRate(string aRating){
        if(aRating == "SSS" || aRating == "S" || aRating == "A" || aRating == "B" || aRating == "C" || aRating == "D" ){
            rating = aRating;
        } else {
            rating = "F";
        }
    }
    string getRate(){
        return rating;
    }
};

int main()
{
    Movie first("The Avengers", "Joss Whedon", "PG-13");
    first.setRate("p");
    cout << first.getRate();


    return 0;
}

// cok asu
