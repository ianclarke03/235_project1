#include <iostream>
#include "Post.hpp"
#include <time.h>
#include <string>
#include <ctime>


Post::Post(std::string tle, std::string bdy){
    
    title = tle;
    body = bdy;

    // current date/time based on current system
    rawtime = time(0);
}



void Post::setTitle(std::string newTitle){
    title = newTitle;
}



const std::string Post::getTitle() const{
    return title;
}


void Post::setBody(std::string newbody){
    body = newbody;
}


const std::string Post::getBody()const{
    return body;
}



std::string Post::getTimeStamp(){

    return asctime( localtime (&rawtime) );


} //prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))




/*
std::string Post::displayPost(){

    std::string tm = asctime( localtime (&rawtime) );
    tm.pop_back();
    
    return (title + " posted at " + tm + "\0" + ":\n" + body + "\n");

}
*/


std::string Post::displayPost(){

    std::string tm = asctime( localtime (&rawtime) );
    //tm.pop_back();
    
    return (title + " posted at " + tm + body);

}

