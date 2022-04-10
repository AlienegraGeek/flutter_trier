import 'package:flutter/material.dart';
import 'package:webview_flutter_plus/webview_flutter_plus.dart';

class WebViewDemo extends StatefulWidget {
  const WebViewDemo({Key? key}) : super(key: key);

  @override
  _WebViewDemoState createState() => _WebViewDemoState();
}

class _WebViewDemoState extends State<WebViewDemo> {
  late WebViewPlusController _controller;
  double _height = 1;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      resizeToAvoidBottomInset: true,
      appBar: AppBar(
        title: Text('ListView Example'),
      ),
      // body: ListView(
      //   children: [
      //     SizedBox(
      //       height: _height,
      //       child: WebViewPlus(
      //         onWebViewCreated: (controller) {
      //           _controller = controller;
      //           // controller.loadUrl('assets/index.html');
      //           controller.loadUrl('assets/kraken_demo.html');
      //         },
      //         onPageFinished: (url) {
      //           _controller.getHeight().then((double height) {
      //             print("Height:  " + height.toString());
      //             setState(() {
      //               _height = height;
      //             });
      //           });
      //         },
      //         javascriptMode: JavascriptMode.unrestricted,
      //       ),
      //     )
      //   ],
      // ),
      body:Align(
        alignment: Alignment.bottomCenter,
        child: Container(
          color: Color(0xFFFAFAFF),
          padding: EdgeInsets.only(top: 10, bottom: 20),
          child: AnimatedPadding(
            padding: EdgeInsets.zero,
            // padding: MediaQuery.of(context).viewInsets/2,
            duration: const Duration(milliseconds: 1),
            curve: Curves.decelerate,
            child: Container(
              child: Row(
                children: [
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.add_circle,
                        color: Color(0xFFA9AAB4),
                      )),
                  Expanded(
                    child: Focus(
                      onFocusChange: (hasFocus) {
                        if (hasFocus) {
                          // _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 300), curve: Curves.ease);
                        }
                      },
                      child: TextFormField(
                        keyboardType: TextInputType.text,
                        // focusNode: _keyboardNode,
                        // controller: _msgController,
                        onTap: () {
                          // _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          // if (_scrollController.offset > 400) {
                          //   print('jump =' + _scrollController.offset.toString());
                          //   _scrollController.jumpTo(0.0);
                          // } else {
                          //   _scrollController.animateTo(0.0, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          //   print('animate =' + _scrollController.offset.toString());
                          // }
                          // Future.delayed(Duration(milliseconds: 200), () {
                          //   _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          // });
                        },
                        autofocus: false,
                        onEditingComplete: () {
                          setState(() {
                            // chatSendMsgList.add(ChatSendMsg(
                            //   _msgController.text,
                            //   'https://fileminiapp.oss-cn-shenzhen.aliyuncs.com/filecoin_logo.png',
                            //   true,
                            //   true,
                            //   DateTime.now().toString().substring(0, 19),
                            // ));
                            // TODO: 发送消息到后台接口{}
                          });
                          // _msgController.clear();
                        },
                        decoration: InputDecoration(
                          fillColor: Color(0xFFF0F0FB),
                          filled: true,
                          hintText: "输入聊天内容",
                          hintStyle: TextStyle(color: Color(0xFF777778)),
                          contentPadding: EdgeInsets.only(left: 12, right: 12),
                          border: OutlineInputBorder(
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                            borderRadius: BorderRadius.circular(30),
                          ),
                          focusedBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.all(Radius.circular(30)),
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                          ),
                          enabledBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.all(Radius.circular(30)),
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.mood,
                        color: Color(0xFFA9AAB4),
                      )),
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.keyboard_voice,
                        color: Color(0xFFA9AAB4),
                      )),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}
