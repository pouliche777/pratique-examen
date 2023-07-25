#include "Warlock.hpp"

Warlock:: Warlock(std::string const &name, std::string const &title){
    this->name = name;
    this->title = title;
    std::cout <<name << ": This looks like another boring day." << std::endl;

}
 void Warlock::introduce() const{
    std::cout << name <<": I am " <<name<< ", " <<title<< "!" <<std::endl;
}
std::string const &Warlock::getName() const{
    return (this->name);
}
std::string const &Warlock::getTitle() const{
    return (this->title);

}
void Warlock::setTitle(std::string const &title){
    this->title =title;
}
Warlock:: ~Warlock(){
std::cout << name<< ": My job here is done!" << std::endl;

}