#include <stdio.h>
int main() {
    char choice;
    int resolution, fps, ram, total_frames;
    float duration_minutes, est_render_time, base_render_seconds, min;
    printf("--- Video Render Estimator ---\n");
    printf("Note: Estimates based on medium-to-heavy editing workloads (effects, color grading, transitions).\n");
do {
    printf("Enter the following details to calculate the render time of the video:\n");
    printf("Video resolution in p: ");
    scanf("%d", &resolution);
    printf("FPS: ");
    scanf("%d", &fps);
    printf("RAM in gb: ");
    scanf("%d", &ram);
    printf("Duration in minutes: ");
    scanf("%f", &duration_minutes);
    total_frames = duration_minutes*fps*60;
    base_render_seconds = total_frames*0.05;

    if (resolution == 2160 && ram == 32) {
    base_render_seconds = base_render_seconds * 2.0;
    est_render_time = base_render_seconds / 60.0;
    min = est_render_time * 0.8;
    printf("The estimated render time would be around %.2f to %.2f mins", min,est_render_time);
    }
    else if (resolution == 2160 && ram == 16) {
    base_render_seconds = base_render_seconds * 3;
    est_render_time = base_render_seconds / 60.0;
    min = est_render_time * 0.8;
    printf("The estimated render time would be around %.2f to %.2f mins.\n", min, est_render_time);
    }
    else if (resolution == 1080 && ram == 16) {
    base_render_seconds = base_render_seconds * 0.9;
    est_render_time = base_render_seconds / 60.0;
     min = est_render_time * 0.8;
    printf("The estimated render time would be around %.2f to %.2f mins.\n", min, est_render_time);
    }
    else if (resolution == 720 && ram == 8 ) {
        base_render_seconds = base_render_seconds * 0.6;
        est_render_time = base_render_seconds / 60.0;
         min = est_render_time * 0.8;
        printf("The estimated render time would be around %.2f to %.2f mins.\n", min, est_render_time);
    }
    else if (resolution == 1080 && ram == 8) {
    est_render_time = base_render_seconds / 60.0;
     min = est_render_time * 0.8;
    printf("The estimated render time would be around %.2f to %.2f mins.\n", min, est_render_time);
    }
    else
    printf("Please rewrite the specifications correctly");

    printf("Do you want to calculate another render time ? (y/n) : ");
    scanf(" %c", &choice);
} while (choice == 'y' || choice == 'Y');
printf("Thanks for using Video Render Estimator !");
return 0;
}