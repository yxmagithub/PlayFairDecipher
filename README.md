#this is the C++ solution for Decipher project#

#Precondition#

1.you need to install the visual studio 2015 community version or above

2.git clone all the file, and use the visual studio to open the *.sln file, then build

3.run inside the console.


#COMMENT#

This is world war II encoding/decoding battle, it use the british created PlayFair keysquare to create the encode-key, and encripted the message, and send over the encrypted message.

#CONTEXT# 
-------------------------------------------------------------------------------

PT-109 is overdue and feared lost.....

Fortunately, the Australian coastwatchers think they may have located
survivors on a nearby island.  They have sent a message using the
PLAYFAIR cipher to headquarters describing the situation, but HQ has
been unable to decode it.  The keyword for this message was supposed to
be QUIZMASTER, but the normal key order of:

         Q U I Z M
         A S T E R
         B C D F G
         H K L N O
         P V W X Y

does not work.  It is suspected that the coastwatchers wrote the keyword
into the key square in a different order.

Please write a standard C++ program to decode the following PLAYFAIR
message using as many variations of the suspected keyword as possible so
that the message can be recovered.

         AWHGS EHONR TXZLF ZNHTE LZBSI
         WHOLZ HDBSS NWEET EAQTW EILGY
         WDRTV TRZAR UVKGS XFVAR LYEDT
         XWKZN ARUIR TESXO LZNGM YSELM
         FN

A description of the PLAYFAIR cipher and keyword variants can be found here:

http://jnicholl.org/Cryptanalysis/Ciphers/Playfair.php

-------------------------------------------------------------------------------
