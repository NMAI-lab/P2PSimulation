import os
#maximum amount of peers on the network
size = 1000

###make a new directory to place all the generated files
##dirname = "Network"+str(size) 
##if (not(os.path.exists(dirname))):
##    os.mkdir(dirname)
##
###copy all necessary files (unchanged) to the target directory
###complicated way to scan a directory... lists all file names in 'filelist'
##(r,dirs,filelist)=os.walk('.\\network_files').next()
##for item in filelist:
##	fname = '.\\network_files\\'+item
##	shutil.copy(fname, '.\\'+ dirname+'\\')


#===============================================
#generating SimpleDemux.h :
Sdemux = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\SimpleDemux.h", "w")
ftop = open("SimpleDemux_h_1.txt", "r")
fbottom = open("SimpleDemux_h_2.txt", "r")
"// output ports to the different peers -- generated by script"
for line in ftop:
    Sdemux.write(line)
Sdemux.write("\n")
for k in range(size): #size is the number of nodes-1 (they go 0 to size)
    Sdemux.write("\tPort &route_out"+str(k)+" ;\n")
for line in fbottom:
    Sdemux.write(line)
Sdemux.close()
ftop.close()
fbottom.close()

#===============================================
#generating SimpleDemux.cpp :

demux = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\SimpleDemux.cpp", "w")
f1 = open("SimpleDemux_cpp_1.txt", "r")
f2 = open("SimpleDemux_cpp_2.txt", "r")
f3 = open("SimpleDemux_cpp_3.txt", "r")

"// output ports to the different peers -- generated by script"
for line in f1:
    demux.write(line)
demux.write("\n")    
for k in range(size): #size is the number of nodes (they go 0 to size-1)
    demux.write(", route_out"+str(k)+"( addOutputPort( \"route_out"+str(k)+"\" ) )\n")

for line in f2:
    demux.write(line)
demux.write("\n")
for k in range(size): 
    demux.write("\t\t\tcase "+str(k)+":\n\t\t\t\t sendOutput( msg.time(), route_out"+str(k)+", message);\n\t\t\t\tbreak;\n")

for line in f3:
    demux.write(line)


demux.close()
f1.close()
f2.close()
f3.close()


#===============================================
#generating msgIdGen.h :
msgId = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\msgIdGen.h", "w")
top = open("msgIdGen_h_1.txt", "r")
bottom = open("msgIdGen_h_2.txt", "r")
"// output ports to the different peers -- generated by script"
for line in top:
    msgId.write(line)
msgId.write("\n")    
for k in range(size): #size is the number of nodes-1 (they go 0 to size)
    msgId.write("\tPort &out_"+str(k)+" ;\n")
for line in bottom:
    msgId.write(line)
msgId.close()
top.close()
bottom.close()

#===============================================
#generating msgIdGen.cpp :

IdGen = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\msgIdGen.cpp", "w")
t1 = open("msgIdGen_cpp_1.txt", "r")
t2 = open("msgIdGen_cpp_2.txt", "r")
t3 = open("msgIdGen_cpp_3.txt", "r")

"// output ports to the different peers -- generated by script"
for line in t1:
    IdGen.write(line)
IdGen.write("\n")    
for k in range(size): #size is the number of nodes (they go 0 to size-1)
    IdGen.write(", out_"+str(k)+"( addOutputPort( \"out_"+str(k)+"\" ) )\n")

for line in t2:
    IdGen.write(line)
IdGen.write("\n")
for k in range(size): 
    IdGen.write("\t\t\tcase "+str(k)+":\n\t\t\t\t sendOutput( msg.time(), out_"+str(k)+", nextOutput);\n\t\t\t\tbreak;\n")

for line in t3:
    IdGen.write(line)


IdGen.close()
t1.close()
t2.close()
t3.close()


#===============================================
#generating LTSNetwork.h :
net = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\LTSNetwork.h", "w")
nettop = open("LTSNetwork_h_1.txt", "r")
netbottom = open("LTSNetwork_h_2.txt", "r")
"// output ports to the different peers -- generated by script"
for line in nettop:
    net.write(line)
net.write("\n")
for k in range(size): #size is the number of nodes-1 (they go 0 to size)
    net.write("\tPort &c_out"+str(k)+" ;\n")
for line in netbottom:
    net.write(line)
net.close()
nettop.close()
netbottom.close()

#===============================================
#generating SimpleDemux.cpp :

LTS = open("C:\\eclipse\\workspace\\P2PSimulation\\p2p\\p2p-simulation\\coupled\\MultiPeerGnu\\LTSNetwork.cpp", "w")
n1 = open("LTSNetwork_cpp_1.txt", "r")
n2 = open("LTSNetwork_cpp_2.txt", "r")
n3 = open("LTSNetwork_cpp_3.txt", "r")

"// output ports to the different peers -- generated by script"
for line in n1:
    LTS.write(line)
LTS.write("\n")    
for k in range(size): #size is the number of nodes (they go 0 to size-1)
    LTS.write(", c_out"+str(k)+"( addOutputPort( \"c_out"+str(k)+"\" ) )\n")

for line in n2:
    LTS.write(line)
LTS.write("\n")
for k in range(size): 
    LTS.write("\t\t\tcase "+str(k)+":\n\t\t\t\t sendOutput( msg.time(), c_out"+str(k)+", message);\n\t\t\t\tbreak;\n")

for line in n3:
    LTS.write(line)


LTS.close()
n1.close()
n2.close()
n3.close()
