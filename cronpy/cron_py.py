#!/usr/bin/python3
"""
## NOTE ##

update this file with the
path to its dependencies.

## #### ##

Need to generate some kind of installer package.

Trying to emulate cron behavior in a pythonic way.

dLong term goal is to set up a system service that will
allow the implementation of cron like jobs in any platform
that can support python.

/var/spool/cron/crontabs/
/etc/passwd
/etc/crontab
/etc/cron.d --> I could set these up in a mirrored environment.
also support windows path syntax...

Special:

@reboot    :on restart
@yearly    :once a year  0 0 1 1 *
@annually  :once a year  0 0 1 1 *
@monthly   :once a month 0 0 1 * *
@weekly    :once a week  0 0 * * 0
@daily     :once a day   0 0 * * *
@midnight  :once a day   0 0 * * *
@hourly    :once an hour 0 * * * * 
*

Fields:

# Minute    Hour    Day of Month     Month            Day of Week     Command
# (0-59)   (0-23)      (1-31)    (1-12)/(jan-dec)  (0-6 or Sun-Sat) 
# Ex runs every minute:
# * * * * echo I see you

now that we've gotten our refresher course out of the way - let's take a look
at implementation.

"""

# might include an interface to my kwargv program to make input easier.
# I was going to just leave it open to reading the text files like cron
# does by default.
#
# well, first things first - we'll need r/w access to a directory.


import os;
import sys;
import time;
import sched;

# might add in a sqlite db that I can use for persistence...
#
# when running as main this should work just fine... at least in the local dir.
sys.path.append('%s%sDependencies'%(os.curdir,os.sep));


# I think the function was time.sleep, I'll need to refresh myself on it.
sched_man = sched.schedulert(time.time, time.sleep)

# Fun exercise might be to add a wizard for this tool (and maybe some of the others)
# that I've built, but still allow the underlying methods to be called directly for
# the sake of allowing advanced users a better handle on things...
def add_entry(**kwargs):
    """
    be mindful of scope...
    """
    pass;






