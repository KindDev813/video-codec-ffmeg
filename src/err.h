#ifndef __ERR_H__
#define __ERR_H__

//error code
typedef enum
{
	NO_ERROR = 0,
	SYNC_ERROR_BEGIN 			= 1,
	ALLOCTE_CTX_ERROR 			= SYNC_ERROR_BEGIN + 1,
	OPEN_RTSP_ERROR 			= SYNC_ERROR_BEGIN + 2,
	RTSP_STREAM_ERROR 			= SYNC_ERROR_BEGIN + 3,
	RTSP_NO_VIDEO_STREAM_ERROR 	= SYNC_ERROR_BEGIN + 4,
	RTSP_ALREADY_OPEN 			= SYNC_ERROR_BEGIN + 5,

	ASYNC_OPEN_ERROR_BEGIN 		= 10,
	OPEN_THREAD_EXIST_ERROR 	= ASYNC_OPEN_ERROR_BEGIN + 1,
	OPEN_PARAM_ERROR 			= ASYNC_OPEN_ERROR_BEGIN + 2,

	DECODE_ERROR_BEGIN 			= 20,
	DECODE_READ_FRAME_ERROR 	= DECODE_ERROR_BEGIN + 1,
	DECODE_RECEIVCE_FRAME_ERROR = DECODE_ERROR_BEGIN + 2,
	DECODE_CUDA_ALLOC_ERROR 	= DECODE_ERROR_BEGIN + 3,
	DECODE_THREAD_EXIST 		= DECODE_ERROR_BEGIN + 4,
	RTSP_NO_OPEN				= DECODE_ERROR_BEGIN + 5,
	DECODE_FIND_DECODER_ERROR	= DECODE_ERROR_BEGIN + 6,
	DECODE_ALLOC_CTX_ERROR		= DECODE_ERROR_BEGIN + 7,
	DECODE_CODEC_OPEN2_FAIL		= DECODE_ERROR_BEGIN + 8,
	DECODE_ALLOC_BUF_FAIL		= DECODE_ERROR_BEGIN + 9,
}ERROR_CODE;

#endif //__ERR_H__

