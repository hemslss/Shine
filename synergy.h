/********************************************************************
 * Synergy.h: 协同引擎
 * liwei.sy@star-net.cn.
 ********************************************************************/

struct ShineApi {
	int 	id;		//API 有且唯一的标识符
	int 	name;	//API name
	void* 	fun;    //API 对应的函数式接口
};

typedef ShineApi API;


external long getApi(long id);
external int shareApi();
