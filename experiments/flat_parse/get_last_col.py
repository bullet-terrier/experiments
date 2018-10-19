#@
"""
experiment for working with certain types of data streams.

this *might* be a cleaner way to approach these documents than trying to 
keep an entire index of where the information should fall in columns.

Downside being that if there is an error, that error will propegate...
however, that is probably less likely than someone unintentionally messing
up some human defined column indices, so we'll give this a test, then run a
benchmark against a series of other files to see how it handles.
"""
import kwargv;
import time;
import sys;
import os;
import io;

# throwing style conventions out the window for this experiment.
from kwargv import *; # this will alleviate the time spent parsing positional args.

# these positional versions of the logic might not be entirely necessary.
def bounds(data = None, low = None, high = None):
    """
    subroutine to handle the low_bound and high_bound processing mode
    for col_extract
    """
    pass;

def length(data = None, value = None):
    """
    subroutine to handle the length based argument for col_extract
    """
    pass;

def from_left(data = None, value = None):
    """
    method to handle the leftmost split in the col_extract mechanism.
    """
    pass;

def col_extract_help():
    """
    function describing col_extract and how to invoke it.
    looks like my coding style is becoming a bit more arcane.
    """
    pass

def col_extract_form(kwargs):
    """
    returning the execution format for col_extract
    should return an integer expressing which version
    of the logic the mechanism should process.
    """
    pass
    exec_type = None;
    # add to this if there are suddenly more forms that
    # this function can take - maybe in an update down the line.
    exec_check = [
      'length',
      'from_left',
      'high_bound',
      'low_bound'
    ]
    has_partner = False;
    # kwargs is going to be determined by the 
    for a in exec_check:
        if kwargs[a] is not None:
            if a not in ['high_bound','low_bound']:
                exec_type = exec_check.index(a);
                break;
            elif a is 'high_bound' and has_partner is False:
                if exec_check['low_bound'] is not None:
                    has_partner = True;
                if has_partner is True:
                    exec_type = len(exec_check)-1;
                break;
        else: exec_type = None; # make sure that it stays none until valid... just in case of fluke.        
    return exec_type; # if it is none, col_extract is going to encounter errors. (which is desired behavior)


def col_extract(kwargs_):
     """
     required arguments:
        data
        one of the following:
            low_bound and high_bound
            length
            from_left
     
     priority will be given to the following order:
     1) length
     2) from_left
     3) low_bound/high_bound
     
     they will behave as follows:
       low_bound and high_bound will break off the part of the list within those bounds
       length will split the string from the right, then pop the rightmost value to the caller
       from left will count bytes from the leftmost position(0) then split the string when
         from_left matches the position in the string. from there it splits and returns the
         rightmost value in the new array to the caller method.

     TEST 2018-03-28 10:25 AM - NOT IMPLEMENTED EXCEPTION TEST
     """
     pass;
     kwargs = {
         'data':None,
         'low_bound':None,
         'high_bound':None,
         'length':None,
         'char':None,
         'from_left':None,
         'benchmark':None
     }
     kwargs = reconcile(kwargs,kwargs_);
     ex_typ = col_extract_form(kwargs);
     if ex_typ is None: raise ValueError(" An Execution mode/ Index Scheme MUST BE SPECIFIED!")
     if ex_typ < 1:
         raise Exception("Not Implemented LIST?");
         pass
     elif ex_typ < 2:
         raise Exception("Not Implemented FROM_LEFT?");
         pass
     elif ex_typ < 3:
         raise Exception("Not Implemented BOUND?");
         pass
     else:
         # I guess this would be using the bounds.
         raise Exception("Not Implemented");
         pass;
     
     
     return;

if __name__=="__main__":
    print(time.strftime("%H:%M:%S"))
    kwargs =arg2kwarg(sys.argv);
    col_extract(kwargs);
