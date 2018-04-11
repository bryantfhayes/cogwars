typedef int csys_status;
#define csys_status_success 0
#define csys_status_failure 0xFFFFFFFF
#define cm_status_returnIfFailed(status) if (!status) return status
#define cm_status_returnError(x, y) if (!status) return y
#define cm_status_return(status) return status
