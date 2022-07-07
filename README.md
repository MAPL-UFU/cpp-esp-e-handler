# cpp-esp-e-handler

Abstract class for event handler interface in esp32. This classes declares the interface needs to be used in every classes
that suposse to iteract with the EventLoop, this way we can use only one Loop for multiple events environments

## Abstract Methods (Must to be overridden for each subclass):

### Event Register  
   
    - void register_events(void* callable)

    callable: basic event function (note that is used here void* to maintain 
    the compatibility with C99 but if you want to use more secure ways to 
    doing this you only need to wrap your caller)
Standard Event Registrator used to include functions to be called when the 
event is fired.
<br>
<br>

### Get Class Name 

    - std::string getClassTag()

    return: final instance classname
Used internally by Logger method
<br>
<br>

## Methods:

### Logger

    - void log(std::string str)

    str: string to be putted into log normal output
This is the standard logger used for Event classes.

 