import 'package:flutter/material.dart';
import 'package:flutter_displaymode/flutter_displaymode.dart';

class WebViewDemo extends StatefulWidget {
  const WebViewDemo({Key? key}) : super(key: key);

  @override
  _WebViewDemoState createState() => _WebViewDemoState();
}

class _WebViewDemoState extends State<WebViewDemo> with WidgetsBindingObserver {
  bool isKeyboardActived = false;

  @override
  void initState() {
    super.initState();
    WidgetsBinding.instance!.addObserver(this);
  }

  @override
  void dispose() {
    super.dispose();
    WidgetsBinding.instance!.removeObserver(this);
  }

  double oldBottom = 0;

  // bool keyCloseStatus = false;

  @override
  void didChangeMetrics() {
    super.didChangeMetrics();
    WidgetsBinding.instance!.addPostFrameCallback((_) {
      // var currentBottom = MediaQuery.of(context).viewInsets.bottom;
      setState(() {
        oldBottom = MediaQuery.of(context).viewInsets.bottom;
      });
      // print('keyboard height = $oldBottom');
      // if (oldBottom != 0 && currentBottom == 0) {
      //   FocusScope.of(context).requestFocus(FocusNode());
      // }
      // setState(() {
      //   oldBottom = currentBottom;
      // });
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      resizeToAvoidBottomInset: false,
      appBar: AppBar(
        title: const Text('Example'),
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
      body: GestureDetector(
        behavior: HitTestBehavior.translucent,
        onTap: () async {
          setState(() {
            // oldBottom = MediaQuery.of(context).viewInsets.bottom;
            oldBottom = 0;
          });
          FocusScope.of(context).requestFocus(FocusNode());
          // await FlutterDisplayMode.setHighRefreshRate();
        },
        child: Align(
          alignment: Alignment.bottomCenter,
          child: AnimatedContainer(
            color: const Color(0xFFFAFAFF),
            // color: Colors.blue,
            // padding: EdgeInsets.only(top: 10, bottom: 20 + MediaQuery.of(context).viewInsets.bottom),
            // padding: EdgeInsets.only(top: 10, bottom: 20 + MediaQuery.of(context).viewInsets.bottom),
            padding: EdgeInsets.only(top: 10, bottom: 20 + oldBottom),
            duration: oldBottom > 0 ? Duration(milliseconds: 300) : Duration(milliseconds: 600),
            // duration: oldBottom > 0 ? Duration(milliseconds: 500) : Duration(milliseconds: 250),
            // curve: oldBottom > 0 ? Curves.easeOutQuart : Curves.linearToEaseOut,
            // curve: oldBottom > 0 ? Curves.easeOutQuart : Curves.linear,
            curve: oldBottom > 0 ? Curves.easeOutQuart : Cubic(0.15, 1.0, 0.15, 1.0),
            child: Row(
              children: [
                IconButton(
                    onPressed: () {},
                    icon: const Icon(
                      Icons.add_circle,
                      color: Color(0xFFA9AAB4),
                    )),
                Expanded(
                  child: TextField(
                    keyboardType: TextInputType.text,
                    keyboardAppearance: Brightness.light,
                    // focusNode: _keyboardNode,
                    // controller: _msgController,
                    onTap: () async {
                      // await FlutterDisplayMode.setHighRefreshRate();
                      // setState(() {
                      //   oldBottom = 346;
                      // });
                      // print('keyboard height = $oldBottom');
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
                      fillColor: const Color(0xFFF0F0FB),
                      filled: true,
                      // hintText: "请输入聊天内容...",
                      hintText: "",
                      hintStyle: TextStyle(color: const Color(0xFF777778)),
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
                IconButton(
                    onPressed: () {},
                    icon: const Icon(
                      Icons.mood,
                      color: Color(0xFFA9AAB4),
                    )),
                IconButton(
                    onPressed: () {},
                    icon: const Icon(
                      Icons.keyboard_voice,
                      color: Color(0xFFA9AAB4),
                    )),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
