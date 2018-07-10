#!Scripts/Python.exe
"""
DEEPER DIVE - adding some custom code as a wrapper to see trends.
As of now I'm failing to see the utility of the function here - so far we can do linear algebra...

Alright - so this is going to be used as the differential for future weights, the greater the error per node,
the more that we reject its answers... 

FIND THE NUMBER OF "TRANSACTIONS" given the number of accounts, and the number of family members-
alright - I know what this is doing - but we need to figure out the number of 

All this function does is assume that the number of family members will apply the number of transactions
across all of the other transactions. IE... this model is simply a squared representation of the number of accounts
alternative, the number of accounts to the power of the number of members (at a low level).


We treat input a as the number of family members
treat input two as the number of accounts.
the output will be the number of transactions. note - this is not by account or by family member.
"""

import numpy as np

def main(a,b):
    # follow along without criticizing until you've mastered what they're doing.
    print("Enter the two values for input layers: ") # so this would become input synapse
    print('a= {}'.format(a))
    #a = int(input()); # this looks bad lol
    # 2
    print('b= {}'.format(b))
    #b = int(input()); # apparently takes integers as input exclusively.
    # 3

    input_data = np.array([a,b]); # building a representation of the nodes.

    weights = {
      'node_0': np.array([1,1]), # so I initialized an array of size a,b - and then I calculate a nodal value.
      'node_1': np.array([-1, 1]),
      'output_node': np.array([2,-1])
    }


    # it almost looks like one half takes an optimistic approach, and the other pessimistic, until both are reconciled.
    node_0_value = (input_data * weights['node_0']).sum()
    # example:
    #  2 * 1 + 3 * 1 = 5...
    print('node 0_hidden: {}'.format(node_0_value)); # why do they use this syntax...

    node_1_value = (input_data * weights['node_1']).sum()
    # 2 * -1 + 3 * 1 = 1;
    print('node 1_hidden: {}'.format(node_1_value));

    hidden_layer_values = np.array([node_0_value,node_1_value])

    output_layer = (hidden_layer_values * weights['output_node']).sum()

    print("output layer : {}".format(output_layer)) # this has to be some holdover from some other language.

if __name__=="__main__":
    seed_a = int(input("seed a: "));
    seed_b = int(input("seed b: "));
    step_a = int(input("step a: "));
    step_b = int(input("step_b: "));
    bounds = int(input("max_bounds"));
    
    a,b = seed_a,seed_b;
    while max(a,b) < bounds:
        main(a,b);
        a+=step_a;
        b+=step_b;
    