int frontend_message_long(Camera *camera, char *message);
int frontend_message	 (Camera *camera, char *message);
int frontend_status	 (Camera *camera, char *message);
int frontend_progress	 (Camera *camera, CameraFile *file, float percentage);
int frontend_confirm	 (Camera *camera, char *message);
int frontend_prompt 	 (Camera *camera, CameraWidget *window);