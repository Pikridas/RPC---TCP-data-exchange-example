
# This is a template Makefile generated by rpcgen

# Parameters

CLIENT = pikridas_client
SERVER = pikridas_server

SOURCES_CLNT.c = 
SOURCES_CLNT.h = 
SOURCES_SVC.c = 
SOURCES_SVC.h = 
SOURCES.x = pikridas.x

TARGETS_SVC.c = pikridas_svc.c pikridas_server.c pikridas_xdr.c 
TARGETS_CLNT.c = pikridas_clnt.c pikridas_client.c pikridas_xdr.c 
TARGETS = pikridas.h pikridas_xdr.c pikridas_clnt.c pikridas_svc.c pikridas_client.c pikridas_server.c

OBJECTS_CLNT = $(SOURCES_CLNT.c:%.c=%.o) $(TARGETS_CLNT.c:%.c=%.o)
OBJECTS_SVC = $(SOURCES_SVC.c:%.c=%.o) $(TARGETS_SVC.c:%.c=%.o)
# Compiler flags 

CFLAGS += -g -DRPC_SVC_FG
LDLIBS += -lnsl
RPCGENFLAGS = -C

# Targets 

all : $(CLIENT) $(SERVER)

$(TARGETS) : $(SOURCES.x) 
	rpcgen $(RPCGENFLAGS) $(SOURCES.x)

$(OBJECTS_CLNT) : $(SOURCES_CLNT.c) $(SOURCES_CLNT.h) $(TARGETS_CLNT.c) 

$(OBJECTS_SVC) : $(SOURCES_SVC.c) $(SOURCES_SVC.h) $(TARGETS_SVC.c) 

$(CLIENT) : $(OBJECTS_CLNT) 
	$(LINK.c) -o $(CLIENT) $(OBJECTS_CLNT) $(LDLIBS) 

$(SERVER) : $(OBJECTS_SVC) 
	$(LINK.c) -o $(SERVER) $(OBJECTS_SVC) $(LDLIBS)

 clean:
	 $(RM) core $(TARGETS) $(OBJECTS_CLNT) $(OBJECTS_SVC) $(CLIENT) $(SERVER)

