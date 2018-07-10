using System;
using System.Text;
using System.Collections.Generic;

/*
 * Need to implement a keyword parsing mechanism for C#.
 * 
 * Should implement these in a better public/private accessibility
 * structure.
*/

namespace kwargs_cs
{
    // I'll add documentation later in the system.
    public class kwargs
    {
        List<kwarg> library { get; set; }
        Dictionary<string, string> _kgs_ { get; set; }

        // I'm not sure I need this to have a constructor - might
        // convert this to a more static type...
        public kwargs()
        {
            // todo: implement definition.
            return;
        }
    }

    // A struct might work best.
    public class kwarg
    {
        string key { get; set; }
        string value { get; set; }

        // we'll call it def (rather than default);
        public kwarg(string key = null, string def = null)
        {
            // todo: implement.
            this.key = key;
            this.value = def;
        }

        // need to look at getting the data through kwarg.
        public void register(kwargs lib, string key = null, string def = null)
        {
            key = key ?? this.key;
            def = def ?? this.value;
            lib._kgs_.Add(key, def);
            //return null;
        }
    }

    // setting kwargv up as a static class - it should basically be immutable.
    public static class kwargv
    {
        // C# implementation of :
        /*        
        def reconcile(dict_1, dict_2):
            """
            update dict_1 withe the contents of dict_2;
            """
            pass
            for a in dict_2.keys():
                dict_1.update({a:dict_2[a]});
            del dict_2;
            return dict_1;
        */
        public static void reconcile(kwargs defaults, Dictionary<string, string> newcomers)
        {
            foreach (string a in newcomers.Keys())
            {
                if (defaults.ContainsKey(a))
                {
                    // update the main dictionary with the new keywords./
                    defaults[a] = newcomers[a];
                }
            }
        }

        // C# implementation of :
        /*
        def arg2kwarg(lst):
            """
            prettyy much on a whim, I'm building a tool
            to allow keyword arguments to be pulled in from
            sys.argv.
            
            The nature of this function *should* allow it to 
            work with the raw value for sys.argv.
            
            NOTE: will trash first arg if list is not even.
                  this means that we'll be dealing with some
                  quirks brought on by the technical decisions made.
            """
            pass
            if len(lst)%2==1:
                # well, we know now that we're working with 
                # an odd list. handle it...
                pass;
                # this means that we don't have a set of key value pairs...
                # each key should have one associated argument of indeterminate type...
                # SOLUTION: throw away first position.
                lst = lst[1:];
            elif len(lst)%2==0:
                # well, we know now that we're working with
                # an even list. do something
                # nothing to do here really. Could recursively force the list to even...
                pass;
            kwargs ={};    
            while len(lst)>0:
                if len(lst)%2==1:
                    ky = lst.pop()
                    kwargs.update({ky:vl})
                    ky,vl = None,None;
                else:
                    vl = lst.pop()
            return kwargs;
        */
        public static void arg2kwarg(string[] argsin)
        {
            // implement with a string array since that's what arg2kwarg was built to do...
            // yay porting logic across languages.
            // if an odd length strip the first entry.
            // not running an argstokwargs
            if (argsin.Length % 2 == 1)
            {
                string[] tmp_array; // only use tmp_array in this scope.
                Copy(argsin, 1, tmp_array, 0);
                tmp_array.Clear();
                tmp_array.Rsize(tmp_array.Length);
                Copy(tmp_array, 0, argsin, 0);
                // GC should take care of the rest.                
            }
            kwargs kw = new kwargs(); // initialize a new kwargs object. Should I implement array.pop() in C#?
            //bool   ad = false; the math takes care of tracking this.
            string ky;
            string vl;

            for (int i = argsin.Length; i > 0; i--)
            {
                if (i % 2 == 1)
                {
                    ky = argsin[i - 1];
                    kw.Add(ky, vl);
                    ky = "";
                    vl = "";
                }
                else
                {
                    vl = argsin[i - 1];
                }
            }
            return kw;
        }
    }
}