/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "opencdm_callback.h"

bool_t
xdr_rpc_cb_message (XDR *xdrs, rpc_cb_message *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (uint16_t), (xdrproc_t) xdr_uint16_t))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->message, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->destination_url, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_cb_ready (XDR *xdrs, rpc_cb_ready *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (uint16_t), (xdrproc_t) xdr_uint16_t))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_cb_error (XDR *xdrs, rpc_cb_error *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (uint16_t), (xdrproc_t) xdr_uint16_t))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->error))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->error_message, ~0))
		 return FALSE;
	return TRUE;
}