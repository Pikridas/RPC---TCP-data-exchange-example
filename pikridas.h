/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PIKRIDAS_H_RPCGEN
#define _PIKRIDAS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct pinakas {
	struct {
		u_int pin_len;
		int *pin_val;
	} pin;
	int pin_size;
};
typedef struct pinakas pinakas;

struct megisto {
	int megisto;
	int elaxisto;
};
typedef struct megisto megisto;

struct f_plus_pin {
	struct {
		u_int pin_len;
		int *pin_val;
	} pin;
	int pin_size;
	float fnumber;
};
typedef struct f_plus_pin f_plus_pin;

struct fpin {
	struct {
		u_int fpinakas_len;
		float *fpinakas_val;
	} fpinakas;
};
typedef struct fpin fpin;

#define MESOS_PROG 0x45017946
#define MESOS_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define mesos 1
extern  float * mesos_1(pinakas *, CLIENT *);
extern  float * mesos_1_svc(pinakas *, struct svc_req *);
extern int mesos_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define mesos 1
extern  float * mesos_1();
extern  float * mesos_1_svc();
extern int mesos_prog_1_freeresult ();
#endif /* K&R C */

#define MAXIMUM_PROG 0x45017947
#define MAXIMUM_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define maximum 2
extern  megisto * maximum_1(pinakas *, CLIENT *);
extern  megisto * maximum_1_svc(pinakas *, struct svc_req *);
extern int maximum_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define maximum 2
extern  megisto * maximum_1();
extern  megisto * maximum_1_svc();
extern int maximum_prog_1_freeresult ();
#endif /* K&R C */

#define FARRAY_PROG 0x45017948
#define FARRAY_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define farray 3
extern  fpin * farray_1(f_plus_pin *, CLIENT *);
extern  fpin * farray_1_svc(f_plus_pin *, struct svc_req *);
extern int farray_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define farray 3
extern  fpin * farray_1();
extern  fpin * farray_1_svc();
extern int farray_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_pinakas (XDR *, pinakas*);
extern  bool_t xdr_megisto (XDR *, megisto*);
extern  bool_t xdr_f_plus_pin (XDR *, f_plus_pin*);
extern  bool_t xdr_fpin (XDR *, fpin*);

#else /* K&R C */
extern bool_t xdr_pinakas ();
extern bool_t xdr_megisto ();
extern bool_t xdr_f_plus_pin ();
extern bool_t xdr_fpin ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PIKRIDAS_H_RPCGEN */
