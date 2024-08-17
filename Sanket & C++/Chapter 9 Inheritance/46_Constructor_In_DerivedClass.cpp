

                /* -------------------------------------------------------------------------- */
                /*                46 //!               Theory                                 */
                /* -------------------------------------------------------------------------- */


  //todo:- Constructors in Derived classes classes --------------------------------

     //* We can use constructors in derived classes in cpp

     //* If base class constructor does not have any arguments , there is no need of any constructor in derived  classes

     //* But if there are one or more arguments in the base class constructor , derived class need to pass arguments to the base class constructor

     //* If both base and derived classes have constructor , base class constructor is executed first


 //todo:- Constructor in multiple inheritance classes --------------------------------

    //* In multiple inheritance , base classes are constructed in the order in which they appear in the class declaration

    //* In multiple inheritance , the constructor are executed in the order of inheritance

 //todo:- Special syntax --------------------------------

    //* C++ supports an special syntax for passing arguments to the multiple base classes.

    //* The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.

    //* THe body is called after all the constructors are finished executed.

    //?  Derived-Constructor (arg1 , arg2 , arg3 ,...): Base1-Constructor(arg3 , arg4) {
    //?    .......
    //?  } Base1-Constructor(arg1 , arg2 )


// todo:- Special case of Virtual Base Class
    
    //* The constructor for virtual base classes are invoked before an non-virtual base class (virtual base classes have more preference than other constructors )

    //* If ther are multiple virtual base classes , they are invoked in the order declared.

    //* Any non-virtual base class are then constructor before teh derived class constructor is executed.


/*
    todo: Case: 1

           class B: public A {
             ? Order of execution of constructor --> First A() then B()
           }

    todo: Case: 2

           class A : public B , public C {
		? Order of execution of constructor --> First B() then C() and then  A()
           }

    todo: Case: 3

          class A : public B , virtual public C {
            ? Order of execution of constructor --> first C() and then B() and then A()
          }
 */