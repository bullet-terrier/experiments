#
"""
Generalized form for parsing my "index" files.

I'll start shipping them as a ".index" or ".ndx"
to differentiate them.

We'll be using positional arguments for this function

Parse Index appears to have all of the information with the 
data that we need.

We can implement either one in each version of python.

On average the python2 version appears to be slightly (negligably)
faster than the python 3 version of "stat_test".

Most of this file is unit test files for most of the information.

making use of dis.dis() to follow the instructions that python is
handling.
"""

import time;
import math;
import random;
import sys;

def test_array(size = 1000, max_size = None, min_size = None):
    """
    """
    pass;
    if max_size is None: max_size = random.randint(0,sys.maxsize);
    if min_size is None: min_size = random.randint(0,max_size);
    arr = []
    for a in range(0,size):
        arr.append(random.randint(min_size,max_size));
    return arr;    

def l_copy(lst):
    """
    python2 implementation of a list.copy method- since I'm primarily
    targeting python 3, but don't necessarily know the state of my destination
    I'm including this.
    Additionally, including benchmarks to allow these to be run.
    """
    r_list = []
    #print('l_copy hit')
    for a in lst:
        r_list.append(a)
    return r_list;
    
def stat_test(set,counter = 1):
    run_set = []
    while counter > 0:
        run_set.append(parse_index(set)[0])
        counter -=1
    return run_set
    
def stat_test2(set,counter = 1):
    run_set = []
    while counter > 0:
        run_set.append(parse_index2(set)[0])
        counter -=1
    return run_set
    
def parse_index2(index_list, sub_slices = None):
    """
    goal: take list of integers, and assign them "Tuples" that will allow us to 
          persistently and consistently handle a variety of index like objects.
          
    this method is going to need to assume that the index types are of type INT,
    but it won't really care. the dependent processes should be checking for the
    apropriate data type where the process needs to care.
    testing list behavior in various modes, to ensure thread safety.
    """
    z = time.time();
    #print(time.time())
    pass;
    # 1) get the length of the list
    # 2) determine the start of the list
    # 3) I'll need to sort the list...
    # 4) reverse the order of the list, then pop until the working list is non-existent.
    # 5) establish tuples that contain the apropriate start/stop slicing indices (ie [:x] [x:y] [y:] )
    # 6) will need to handle the special conditions [:x] and [y:];.
    iter_count = 0;
    last_index = None;
    curr_index = None;
    op_list = None;
    # this only works on python3.
    # I'm going to try reversing this to see if python3 becomes faster again
    if sys.version[0] is '2': op_list = l_copy(index_list);
    else: 
        op_list = index_list.copy() # using index_list.copy() to make this thread safe.
    # non integer characters are going to throw issues now. Hope you have fun lol
    for a in op_list:
        print(a)
        op_list[op_list.index(a)] = int(a);
        #print("l_copy !it")    
    op_list.sort();
    op_list.reverse(); # We'll use a pop() method to work through the stack.
    slice_list = [];
    # now - we've got to initial
    while len(op_list) > 0:
        curr_index = op_list.pop(); # get the initial index;
        if iter_count is 0: #use special case 1)
            slice_list.append(("",curr_index));
        elif len(op_list) is 0:
            slice_list.append((curr_index,""));
        else:
            slice_list.append((last_index,curr_index));
        last_index=  curr_index;
        iter_count+=1
    n = time.time()-z;
    #print(time.time()-z);
    return n,slice_list; 


def parse_index(index_list, sub_slices = None):
    """
    goal: take list of integers, and assign them "Tuples" that will allow us to 
          persistently and consistently handle a variety of index like objects.
          
    this method is going to need to assume that the index types are of type INT,
    but it won't really care. the dependent processes should be checking for the
    apropriate data type where the process needs to care.
    testing list behavior in various modes, to ensure thread safety.
    """
    z = time.time();
    #print(time.time())
    pass;
    # 1) get the length of the list
    # 2) determine the start of the list
    # 3) I'll need to sort the list...
    # 4) reverse the order of the list, then pop until the working list is non-existent.
    # 5) establish tuples that contain the apropriate start/stop slicing indices (ie [:x] [x:y] [y:] )
    # 6) will need to handle the special conditions [:x] and [y:];.
    iter_count = 0;
    last_index = None;
    curr_index = None;
    op_list = None;
    # this only works on python3.
    # I'm going to try reversing this to see if python3 becomes faster again
    if sys.version[0] is '3' : 
        op_list = index_list.copy() # using index_list.copy() to make this thread safe.
        #print("l_copy !it")
    else: op_list = l_copy(index_list);
    for a in op_list:
        op_list[op_list.index(a)] = int(a);
        print(a);
    op_list.sort();
    op_list.reverse(); # We'll use a pop() method to work through the stack.
    slice_list = [];
    # now - we've got to initial
    while len(op_list) > 0:
        curr_index = op_list.pop(); # get the initial index;
        if iter_count is 0: #use special case 1)
            slice_list.append(("",str(curr_index)));
        elif len(op_list) is 0:
            slice_list.append(str(last_index),str(curr_index));
            slice_list.append((str(curr_index),""));
        else:
            slice_list.append((str(last_index),str(curr_index)));
        last_index=  curr_index;
        iter_count+=1
    n = time.time()-z;
    #print(time.time()-z);
    return n,slice_list; 
    
if __name__=="__main__":
    print(time.strftime("%H:%M:%S"));
    st = time.time();
    ls = sys.argv[1:];
    for i in range(0,len(ls)):
        ls[i]= int(ls[i]);
    x = parse_index(sys.argv[1:]);
    fn = time.time();
    print(x)
    print("Time taken: %s seconds"%(fn-st));
    