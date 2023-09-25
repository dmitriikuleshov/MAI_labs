
```sh
root@Home:~/MAI_labs# who
root     pts/1        2023-09-23 21:17
root@Home:~/MAI_labs# ls -la
total 28
-rw-r--r--  1 root root 1230 Sep 15 17:31 ''$'\033'
drwxr-xr-x  4 root root 4096 Sep 23 21:22  .
drwx------ 16 root root 4096 Sep 23 21:18  ..
drwxr-xr-x  8 root root 4096 Sep 18 13:59  .git
-rw-r--r--  1 root root   10 Sep 14 00:29  README.md
-rw-r--r--  1 root root 1230 Sep 15 17:29  a
drwxr-xr-x  2 root root 4096 Sep 18 13:59  lab1
root@Home:~/MAI_labs# mkdir lab2
root@Home:~/MAI_labs# touch my_wonderful_file.txt
root@Home:~/MAI_labs# cp my_wonderful_file.txt lab2
root@Home:~/MAI_labs# cd lab2
root@Home:~/MAI_labs/lab2# ls -la
total 8
drwxr-xr-x 2 root root 4096 Sep 23 21:23 .
drwxr-xr-x 5 root root 4096 Sep 23 21:23 ..
-rw-r--r-- 1 root root    0 Sep 23 21:23 my_wonderful_file.txt
root@Home:~/MAI_labs/lab2# rm my_wonderful_file.txt
root@Home:~/MAI_labs/lab2# cd ..
root@Home:~/MAI_labs# mv my_wonderful_file.txt lab2
root@Home:~/MAI_labs# cd lab2
root@Home:~/MAI_labs/lab2# ls -la
total 8
drwxr-xr-x 2 root root 4096 Sep 23 21:24 .
drwxr-xr-x 5 root root 4096 Sep 23 21:24 ..
-rw-r--r-- 1 root root    0 Sep 23 21:23 my_wonderful_file.txt
root@Home:~/MAI_labs/lab2# rm my_wonderful_file.txt
root@Home:~/MAI_labs/lab2# touch my_secret_file.txt
root@Home:~/MAI_labs/lab2# vim my_secret_file.txt
root@Home:~/MAI_labs/lab2# cat my_secret_file.txt
here is the secret information about me.
root@Home:~/MAI_labs/lab2# rm my_secret_file.txt
root@Home:~/MAI_labs/lab2# ps
    PID TTY          TIME CMD
    562 pts/2    00:00:00 bash
    702 pts/2    00:00:00 ps
root@Home:~/MAI_labs/lab2# ps -a
    PID TTY          TIME CMD
    425 pts/1    00:00:00 bash
    703 pts/2    00:00:00 ps
root@Home:~/MAI_labs/lab2# touch my_example_file.txt
root@Home:~/MAI_labs/lab2# vim my_example_file.txt
root@Home:~/MAI_labs/lab2# echo hello
hello
root@Home:~/MAI_labs/lab2# tail my_example_file.txt -n12
sn fksndlfnashfif
jfknsaldfhioa wjeifjwf
SDfsak jfaskdfjasfda
s jdf
jwerkj wkefkjs kf lksndklfnaslkmdl
sfdkajofi qojasdfj
as
fkjaso ihfiwefoij sdfa
fd
ajsdfja
;sjf
asjfasfasdfaskfdaslknfdlknksdew
root@Home:~/MAI_labs/lab2# head my_example_file.txt  -n2
asdfasfdasfdasdfasfdasfasdf
dsafsdfnlnkn sdfkasflnasklvnkfnewoi
root@Home:~/MAI_labs/lab2# grep dsafsdfnlnkn -n my_example_file.txt
2:dsafsdfnlnkn sdfkasflnasklvnkfnewoi
root@Home:~/MAI_labs/lab2# ls my_example_file.txt
my_example_file.txt
root@Home:~/MAI_labs/lab2# ls
my_example_file.txt
root@Home:~/MAI_labs/lab2# history | grep tail
  485  tail my_example_file.txt -n12
  490  history | grep tail
root@Home:~/MAI_labs/lab2# history > history.txt
root@Home:~/MAI_labs/lab2# vim history.txt
root@Home:~/MAI_labs/lab2# rm history.txt



root@Home:~# ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/root/.ssh/id_rsa):
/root/.ssh/id_rsa already exists.
Overwrite (y/n)? y
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /root/.ssh/id_rsa
Your public key has been saved in /root/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:K5FdEJF+i9mehNyCKZiMemX1aoY8rnGgIZT41/XO5wc root@Home
The key's randomart image is:
+---[RSA 3072]----+
|        ++       |
|. .     ..       |
|.o     .. .      |
|..   ..+.o.      |
|oooo..+=SB..     |
|oo+o+ o.B+= E    |
|o .+.o...+o...   |
|. .o+ +.  oo  .  |
| ..o.+      ..   |
+----[SHA256]-----+
root@Home:~# ssh-copy-id d_kuleshov@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/root/.ssh/id_rsa.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
d_kuleshov@185.5.249.140's password:

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'd_kuleshov@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

root@Home:~# ssh d_kuleshov@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 10:35:34 2023 from 85.143.224.44
d_kuleshov@vds2476450:~$ logout



root@Home:~/MAI_labs/lab2# hostname -I
172.26.126.66
root@Home:~/MAI_labs/lab2# scp archive.tar d_kuleshov@185.5.249.140:/root/archive.tar
scp: /root/archive.tar: Permission denied
root@Home:~/MAI_labs/lab2# scp archive.tar d_kuleshov@185.5.249.140:/root/archive.tar
scp: /root/archive.tar: Permission denied
root@Home:~/MAI_labs/lab2# scp archive.tar d_kuleshov@185.5.249.140:/home/archive.tar
scp: /home/archive.tar: Permission denied
root@Home:~/MAI_labs/lab2# scp archive.tar d_kuleshov@185.5.249.140:~/archive.tar
archive.tar                                                                           100%   10KB 158.3KB/s   00:00


root@Home:~/MAI_labs/lab2# ssh d_kuleshov@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Sat Sep 23 23:24:56 2023 from 188.66.38.91
d_kuleshov@vds2476450:~$ ls -la
total 44
drwxr-xr-x  4 d_kuleshov d_kuleshov  4096 Sep 23 23:33 .
drwxr-xr-x 30 root       root        4096 Sep 10 18:09 ..
-rw-r--r--  1 d_kuleshov d_kuleshov 10240 Sep 23 23:33 archive.tar
-rw-------  1 d_kuleshov d_kuleshov   365 Sep 23 23:27 .bash_history
-rw-r--r--  1 d_kuleshov d_kuleshov   220 Sep 10 18:09 .bash_logout
-rw-r--r--  1 d_kuleshov d_kuleshov  3771 Sep 10 18:09 .bashrc
drwx------  2 d_kuleshov d_kuleshov  4096 Sep 18 10:22 .cache
-rw-rw-r--  1 d_kuleshov d_kuleshov     0 Sep 18 11:28 create_user.sh
-rw-r--r--  1 d_kuleshov d_kuleshov   807 Sep 10 18:09 .profile
drwx------  2 d_kuleshov d_kuleshov  4096 Sep 23 23:26 .ssh
d_kuleshov@vds2476450:~$ tar xvf archive.tar
listing.md
d_kuleshov@vds2476450:~$ ls -l
total 20
-rw-r--r-- 1 d_kuleshov d_kuleshov 10240 Sep 23 23:33 archive.tar
-rw-rw-r-- 1 d_kuleshov d_kuleshov     0 Sep 18 11:28 create_user.sh
-rw-r--r-- 1 d_kuleshov d_kuleshov  4380 Sep 23 22:28 listing.md
d_kuleshov@vds2476450:~$ logout
root@Home:~# scp d_kuleshov@185.5.249.140:~/listing.md listing.md

```
