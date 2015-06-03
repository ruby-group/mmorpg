********************************************************************
                     D R U P A L    M O D U L E
********************************************************************

Name: troll module
Authors: Aaron Welch <welch at advomatic dot com>
         David Kent Norman http://deekayen.net
         Jeff Warrington <jeff at qoolio dot org>
         Mike Gifford https://openconcept.ca

Dependencies:
  For host lookups, we are now using gethostbyaddr() and not PHP's exec() and shell 'host' command.

********************************************************************

DESCRIPTION

troll.module provides troll management tools for community sites including:
- user tracking by ip address
- bans IP addresses forever or for set duration, by ban I mean redirect, and by redirect I mean complete site blocking not just account creation and login
- advanced user account searching
- easy user blocking by role
- punish visitors listed in blacklists such as SPEWS.org and okean.com. Note IP banning/blocking differs from blacklisting.

********************************************************************

INSTALLING

See the INSTALL.txt file in this directory.

********************************************************************

BLOCKING AN IP ADDRESS RANGE

   1. Navigate to admin/people/troll/ip_ban

   2. Into the field 'List:' type in the start of IP range to block.
      For example if you want to block 172.16.254.0 through 172.16.254.255 then type in 172.16.254.0/24
      This would block the 256 address locations.

      Notes:
         -The IP format must be *.*.*.*/24
         -Replace * by numbers. You must add /24 at the end. /24 is a CIDR notation. Read more at http://en.wikipedia.org/wiki/IPv4_subnetting_reference

   3. To view the full list of blacklisted IPs go to admin/people/troll/ip_blacklist/search
      Enter any IP within the range you just blocked. For example '172.16.254.50' without the quotes. If successful the IP shows as blacklisted.

********************************************************************

CONTRIBUTING. REPORTING ISSUE. REQUESTING SUPPORT. REQUESTING NEW FEATURE.

* Go to the module issue queue at http://drupal.org/project/issues/troll
* Click on CREATE A NEW ISSUE link.
* Fill the form.
* To get a status report on your request go to http://drupal.org/project/issues/user

********************************************************************

UPGRADING

Read more at http://drupal.org/node/250790

********************************************************************

WISH LIST

- count hits from trolls (maybe just with variable_get/set()?)
- gototrollshouseandconfinscatethiercomputer.module plugin