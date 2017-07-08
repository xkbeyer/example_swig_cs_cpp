/* File Mock.i */
 
%module(directors="1") mock_wrap
%{
 #include "Mock.h"
%}

%include "std_string.i"
%include "std_vector.i"
%include "std_map.i"
%include "std_shared_ptr.i"
%shared_ptr(myPtr_s)
%shared_ptr(Otto)
namespace std {
%template(IntVector) vector<int>;
%template(IntMap) map<int,string>;
}
%feature("director") Mock;


%include "Mock.h"