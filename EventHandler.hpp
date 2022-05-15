#pragma once

/* 
 * EventHandler.hpp
 * 
 *  Abstract class that defines the interface for event handlers.
 * 
 */

class EventHandler
{
    public:
        virtual void register_events(void*)=0;
        void log(std::string);
        virtual std::string getClassTag()=0;
};

