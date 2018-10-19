#
"""
defining the base attributes of a neural node.
I'll leave this pretty open ended to see what happens.
each neuron will need to individually track its depth.
the factory will need to assign the depths without worrying about 
managing the depths.
"""
# need to add kwargv.reconcile for the declarations of the object.

class neuron:
    """
    base neuron class.
    the three permutations of neuron will be 
    assembled on this framework.
    
    May include "slots" for the base neuron.
    """
    pass;
    
    input_handle = accept_input;
    output_handle = generate_output;
    weight_handle = contemplate_weights;
    universal_args = "";
    direct_input = [];
    direct_output = [];
    direct_parellel = []; # kind of like my hierarchical unit.
    
    def __init__(self, **kwargs):
        """
        initialization function - define what the neuron will perceive.
        """
        pass;
        synapse = {
            "layer":None,
            "accept_from":None,
            "pass_to":None,
            "input_handle":None,
            "output_handle":None,
            "weight_handle":None,
            "neuron_name":None # none for now, I'm sure I'll come up with something.
        }
        
    def accept_input(self,**kwargs):
        """
        function to accept input - will need to 
        take the identifying information then proceed
        to do something with it. The order doesn't matter,
        just the association.
        """
        pass;
        
    def contemplate_weights(self,**kwargs):
        """
        function to balance and weigh input - we'll see what the
        necessity for the output will be.
        """
        pass;
        
    def generate_output(self, **kwargs):
        """
        take results and process them to generate a meaningful signal.
        """
        pass;