#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>


 class TargetGenerator{

    private:
        
        TargetGenerator(TargetGenerator const & other);
        TargetGenerator &operator=(TargetGenerator const other);
        std::map <std::string, ATarget *> targetBook;


    public :
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const & typeName);
        ATarget* createTarget(std::string const & typeName);

 };