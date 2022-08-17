import React from "react";

const styles = {
    wrapper: {
        margin: 10,
        padding: 10,
        display: "flex",
        flexDirection: "row",
        border: "2px dashed grey",
        borderRadius: 20,
    },
    imageContainer: {},
    image: {
        width: 50,
        height: 50,
        borderRadius: 25,
    },
    contentContainer: {
        marginLeft: 8,
        display: "flex",
        flexDirection: "column",
        justifyContent: "center",
    },
    nameText: {
        color: "black",
        fontSize: 16,
        fontWeight: "bold",
    },
    commentText: {
        color: "black",
        fontSize: 16,
    },
};

function Comment(props){
    return(
        <div style={styles.wrapper}>
            <div style={styles.imageContainer}>
                <img src="https://placedog.net/30/20" style={styles.image} />
            </div>

            <div style={styles.contentContainer}>
                <span style={styles.nameText}>{props.name}</span>
                <span style={styles.commentText}>{props.comment}</span>
            </div>      
        </div>
    );
}
export default Comment;