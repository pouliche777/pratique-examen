#include "TargetGenerator.hpp"

TargetGenerator:: TargetGenerator(){
   
}

TargetGenerator:: ~TargetGenerator(){

}
void TargetGenerator::learnTargetType(ATarget *target){
    if(target){
        targetBook[target->getType()] = target->clone();
    }
}
void TargetGenerator::forgetTargetType(std::string  const & typeName){
    std::map<std::string, ATarget *>::iterator it = targetBook.find(typeName);
    if(it != targetBook.end())
        delete it->second;
    targetBook.erase(typeName);


}
ATarget* TargetGenerator::createTarget(std::string const & targetType){
        std::map <std::string, ATarget *>::iterator it = targetBook.find(targetType);

        if(it != targetBook.end())
            return it->second;
        else
            return NULL;

}