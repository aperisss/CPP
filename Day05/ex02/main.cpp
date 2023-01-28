#include "Form.hpp"
#include "Bureaucrat.hpp"


int main(){
    Bureaucrat Bob("Bob", 25);
    Bureaucrat Riku("Riku", 10);
    Bureaucrat Stan("Stan", 150);

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << Bob << Riku << Stan  << std::endl;

    Form* Style = new Form("Style", 25, 10);
    std::cout << *Style;

    Bob.signForm(*Style);
    std::cout << *Style;

    Riku.signForm(*Style);
    std::cout << *Style;

    Stan.signForm(*Style);
    std::cout << *Style;

    delete (Style);

    Bureaucrat	BigBoss("Big Boss", 1);
	Form*		Priority = new Form("Prior Task", 1, 1);

    std::cout << *Priority;

    Bob.signForm(*Priority);
    Riku.signForm(*Priority);
    Stan.signForm(*Priority);
    
    std::cout << std::endl;

    BigBoss.upGrade();
    std::cout << BigBoss;
    BigBoss.signForm(*Priority);
    std::cout << std::endl;
    
    delete(Priority);
    return 0;
}